#include "node.h"
#include <list>
#pragma once

class animal {
private:
	// nothing	
public:
	Node* root;			//pointer to animal
	animal();
	Node *body;			//add body to root node
	Node *bodyJoint ;	//add bodyJoint to body
	Node *head;		//add head to bodyJoint
	Node *legF1;		//add legs to bodyJoint
	Node *legF2;
	Node *legF3;
	Node *legF4;
	Node *tail;
};