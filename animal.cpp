#include "animal.h"
#include "window.h"

animal::animal(){

	std::vector<vec3> *bodyList = new std::vector<vec3>();
	std::vector<vec3> *headList = new std::vector<vec3>();
	std::vector<vec3> *legList = new std::vector<vec3>();
	std::vector<vec3> *tailList = new std::vector<vec3>();

	bodyList->push_back(vec3(0, 0, 1));
	bodyList->push_back(vec3(4, 0, 1));
	bodyList->push_back(vec3(4, 4, 1));
	bodyList->push_back(vec3(0, 4, 1));
	poly *bodyP = new poly(*bodyList, false);
	bodyP->setColor(1, .5, .5);

	headList->push_back(vec3(0, 0, 1));
	headList->push_back(vec3(3, 2, 1));
	headList->push_back(vec3(0, 2, 1));
	poly *headP = new poly(*headList, false);
	headP->setColor(.5, .1, .8);

	legList->push_back(vec3(0, 0, 1));
	legList->push_back(vec3(.5, 0, 1));	
	legList->push_back(vec3(.5, 4, 1));
	legList->push_back(vec3(0, 4, 1));

	poly *legP = new poly(*legList, false);
	legP->setColor(.1, .1, .9);

	tailList->push_back(vec3(0, 0, 1));
	tailList->push_back(vec3(2, 0, 1));
	tailList->push_back(vec3(5, 2, 1));
	tailList->push_back(vec3(2, 0, 1));
	poly *tailP = new poly(*tailList, true);
	tailP->setColor(0, 0, 1);

	//set up nodes with given data
	Node *root = new Node(poly(),"root");					//important root node
	body = root->addChild(*bodyP, true, "body");			//add body to root node
	bodyJoint = body->addChild(poly(), false, "Joint");		//add bodyJoint to body
	head = bodyJoint->addChild(*headP, true, "head");		//add head to bodyJoint
	legF1 = bodyJoint->addChild(*legP, true, "leg1");		//add legs to bodyJoint
	legF2 = bodyJoint->addChild(*legP, true, "leg2");
	legF3 = bodyJoint->addChild(*legP, true, "leg3");
	legF4 = bodyJoint->addChild(*legP, true, "leg4");
	tail = bodyJoint->addChild(*tailP, true, "tail");		//add tail to bodyJoint
	//*(rot)*(scale)*(trans)
	body->setTranslation(-2,0);
	head->setTranslation(0, 4);
	legF1->setTranslation(4, 0);
	legF4->setTranslation(3.5, 0);
	legF3->setTranslation(.5, 0);
	legF1->setRotation(180);
	legF2->setRotation(180);
	legF3->setRotation(190);
	legF4->setRotation(170);
//	legF1->setTranslation(4, 0);
//	legF3->setTranslation(4,2);
//	legF4->setTranslation(-4,2);
	tail->setTranslation(4, 0);

	this->root = root;
}