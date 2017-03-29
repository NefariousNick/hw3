/*
poly.h
Nicholas Wagner	G00860846
CS351
*/
#pragma once
#include "mat3.h"
#include <QtOpenGL>
#include <QtWidgets>
#include <vector>
#include <iostream>
#include <list>
using std::vector;

class poly {
private:
	//this is the representation of:
	//glColor3f(color[0],color[1],color[2])
	//using a vec3 as the 3 color parameters
	vec3 color;

	//this is the collection of data points in poly
	vector<vec3> data;
	
	//this is the representation of whether or not the shape is a 
	//polyline or a polygon		//defaults to false
	bool isLine = false;

public:

	poly();
	poly(vector<vec3> input,bool isLine);
	void setColor(float x, float y, float z);
	//get and set coordinates of triangle
	vec3 operator[](unsigned int index);
	void draw();
	bool isLineShape();
	vec3 getColor();
	vector<vec3> getData();
}; 
