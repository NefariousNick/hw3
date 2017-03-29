#include "node.h"

poly Node::getPolyData(){
	return p;
}

void Node::setData(poly p1){
	this->p = p1;
	this->isShape = true;
}

//identity matrix for rot, trans, scale
Node::Node(){

	this->p = poly();
	rot = new mat3();
	trans = new mat3();
	scale = new mat3();
}

Node::Node(poly data,std::string name) {
	this->p = data; this->name = name;
	rot = new mat3();
	trans = new mat3();
	scale = new mat3();
}

Node::Node(poly data, bool isShape, std::string name) {
	this->p = data; this->name = name;
	rot = new mat3();
	trans = new mat3();
	scale = new mat3();
	this->isShape = isShape;
}


std::string Node::getName(){
	return this->name;
}

Node * Node::addChild(poly value)
{
	Node *add = new Node();
	add->setData(value);
	children.push_back(add);
	return add;
}
Node * Node::addChild(poly value, bool isShape)
{
	Node *add = new Node();
	add->setData(value);
	add->isShape = isShape;
	children.push_back(add);
	return add;
}
Node * Node::addChild(poly value, bool isShape, std::string name)
{
	Node *add = new Node();
	add->setData(value);
	add->isShape = isShape;
	add->name = name;
	children.push_back(add);
	return add;
}
//return if this node has children
bool Node::hasChild() {
	return !(this->children.size() == 0);
}
std::list<Node*> Node::getChildren()
{
	return this->children;
}

//calls erase function, although I'm not sure it "properly" deletes nodes
//The function should call the node's and their children's nodes destructors
//it removes this node and all of it's dependents (children)
void Node::removeNode(int index) {
	while (!children.empty()) {
		children.pop_front();
	}
	delete this;

}

//first call uses identity matrix
void Node::traverse()
{
	this->traverse(this, mat3::identity());
}
void Node::traverse(Node* parent,mat3 transform) {
	//*(scale)*(trans)*(rot)
	//apply transformations T=T*N.transformation
	transform = (transform)*(*this->scale)*(*this->rot)*(*this->trans);

	for (std::list<Node*>::const_iterator li = this->children.begin(), end = this->children.end();li != end; ++li) {
		//***********************************
		//if isShape of current child is true, draw the shape
		if ((*li)->isShape == true) {
			//get mat3 data from li
			poly p = (*li)->getPolyData();
			vector<vec3> data;
			data = (p.getData());
			
			//set color of shape
			vec3 color = p.getColor();
			glColor3f(color[0], color[1], color[2]);
			//determine polyline or polygon
			if (p.isLineShape() == true)
				glBegin(GL_LINE_LOOP);
			else
				glBegin(GL_POLYGON);
			//draw!
			//for the size of data in poly p
			//work through the points until i <= the size of 
			//the list of points in poly p
			vec3 cur;	
			//*(scale)*(trans)*(rot)
			mat3 currentMov = mat3::identity();
			currentMov = (currentMov)*(*(*li)->getScale())*(*(*li)->getTrans())*(*(*li)->getRot());
			//NOTE: changed from i<=data.size() to i<data.size()
			//How to deal with a zero point?
			for (int i = 0; i < data.size(); i++) {
				cur = (transform*currentMov)*data[i];	//apply transformation to the point
				glVertex2f(cur[0], cur[1]);				//acquire the relevant points
			}
			glEnd();
		}//end isShape
		//if isShape = false, it is only a branch
		else {
			(*li)->traverse((*li), transform);
		}
		//check the current node has children, call traverse on that node (and subsequently
		//it's children
		if((*li)->hasChild()){
			(*li)->traverse((*li), transform);
		}
	}//end iterative for-loop
		
}

//using mat3 rotation, set the rotation of this node using the provided angle
void Node::setRotation(float angle){
	//*(this->rot) = *(this->rot)*mat3::rotation2D(angle);
	*(this->rot) = mat3::rotation2D(angle);
	this->traverse(this, (*rot));
}

//using mat3 translation, set the translation of this node using the provided x and y
void Node::setTranslation(float x,float y){
	//*(this->trans) = *(this->trans)*mat3::translation2D(x,y);
	//*(this->trans) = mat3::translation2D(x, y)*(*(this->trans));
	*(this->trans) = mat3::translation2D(x, y);
	this->traverse(this, (*trans));
}

//using mat3 scale, set the scale of this node using the provided x and y
void Node::setScale(float x, float y){
	//*(this->scale) = *(this->scale)*mat3::scale2D(x, y);
	//*(this->scale) = mat3::scale2D(x, y)*(*(this->scale));
	*(this->scale) = mat3::scale2D(x, y);
	this->traverse(this, (*scale));

}
void Node::setColor(float x, float y, float z)
{
	this->p.setColor(x, y, z);
}

mat3* Node::getRot() {
	return this->rot;
}

mat3* Node::getTrans() {
	return this->trans;
}

mat3* Node::getScale() {
	return this->scale;
}
//return inverse cos
int Node::getRotation() {
	return acos(rot->getColumn(0)[0]);
}
//return x translation only
int Node::getxTranslation() {
	return trans->getColumn(2)[0];
}
//return y translation only
int Node::getyTranslation() {
	return trans->getColumn(2)[1];
}
//return x scale only
int Node::getxScale() {
	return scale->getColumn(0)[0];
}
//return y scale only
int Node::getyScale() {
	return scale->getColumn(1)[1];
}
