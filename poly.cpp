/*
poly.cpp
Nicholas Wagner	G00860846
CS351
*/
#include "poly.h"
#include <vector>
#include <assert.h>

#pragma once
//default constructor creates a single point at the origin
poly::poly() {
	this->color = vec3(0, 0, 0);
}
//iterate through the given list input??
poly::poly(vector<vec3> input,bool isLine) {
	this->isLine = isLine;
	for (int i = 0; i < input.size(); i++)
		this->data.push_back(input[i]);
	this->color = vec3(0, 0, 0);
}

void poly::setColor(float x, float y, float z) {
	this->color[0] = x;
	this->color[1] = y; 
	this->color[2] = z;
}

//get and set coordinates of triangle
vec3 poly::operator[](unsigned int index) {
	assert(index > 0 && index < data.size());
	return data[index];
}

void poly::draw() {
	glColor3f(color[0], color[1], color[2]);
	glBegin(GL_POLYGON);
	for (int i = 0; i < data.size(); i++)
		glVertex2f(data[i][0], data[i][1]);
	glEnd();

}

bool poly::isLineShape() {
	return this->isLine;
}
vec3 poly::getColor() {
	return this->color;
}

vector<vec3> poly::getData()
{
	return this->data;
}
