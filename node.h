#include <string>
#include <list>
#include "poly.h"
#include "mat3.h"
#pragma once

//////////////////////////////////////////////////////////
// A class for storing and accessing strings in a tree
//////////////////////////////////////////////////////////

class Node {
private:
	mat3* rot;			
	mat3* trans;
	mat3* scale;

	bool isShape;					//boolean that is used for polyline or polygon

	poly p;							// These might be transforms and/or geometry instead. 
	std::list<Node*> children;
	std::string name;

public:
	poly getPolyData();
	void setData(poly p1);
	Node();
	Node::Node(poly data, std::string name);
	Node(poly data, bool isShape, std::string name);
	~Node() {
		delete(rot);
		delete(trans);
		delete(scale);
	};
	std::string getName();
	Node* addChild(poly value);
	Node * addChild(poly value, bool isShape);
	Node * addChild(poly value, bool isShape, std::string name);
	bool hasChild();
	std::list<Node*> getChildren();
	void removeNode(int index);
	void traverse();
	void traverse(Node* parent, mat3 transform);
	void setRotation(float angle);
	void setTranslation(float x, float y);
	void setScale(float x,float y);
	void setColor(float x, float y, float z);
	mat3* getRot();
	mat3* getTrans();
	mat3* getScale();
	int getRotation();
	int getxTranslation();
	int getyTranslation();
	int getxScale();
	int getyScale();
};