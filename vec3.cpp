/*
*  vec3.cpp
*/
//Nicholas Wagner
//G00860846
//CS351
//HW2
#include "vec3.h"
#include <math.h>
#include <assert.h>
#include <iostream>
#include <stdio.h>

///----------------------------------------------------------------------
/// Constructors
///----------------------------------------------------------------------
vec3::vec3() {
	this->data[0] = 0;
	this->data[1] = 0;
	this->data[2] = 0;
}

//assigns vec3(x,y,z) to data[]= {x,y,z}
vec3::vec3(float x, float y, float z) {
	//assert((float)x); 
	//assert((float)y);
	//assert((float)z);
	this->data[0] = x;
	this->data[1] = y;
	this->data[2] = z;
}

///----------------------------------------------------------------------
/// Getters/Setters
///----------------------------------------------------------------------		
/// Returns the value at index
float vec3::operator[](unsigned int index) const {
	if (index < 0 || index > 2)
		throw std::invalid_argument("Index out of range.");
	assert(index > 0 || index < 2);
	return this->data[index];
}

/// Returns a reference to the value at index
float& vec3::operator[](unsigned int index) {
/*	if (index < 0 || index > 2)
		throw std::invalid_argument("Index out of range.");*/
	assert(index > 0 || index < 2);
	return this->data[index];
}

/// Prints the vector to standard output in a nice format
void vec3::print() {
	//std::cout << "[" << data[0] << "," << data[1] << "," << data[2] << "]" << std::endl;
	std::cout << printf("[%f, %f, %f]", data[0], data[1], data[2]);
}

///----------------------------------------------------------------------
/// Vector Operations
///----------------------------------------------------------------------
/// Returns the geometric length of the vector
float vec3::length() const {
	return sqrtf(pow(0 - data[0], 2) + pow(0 - data[1], 2) + pow(0 - data[2], 2));
}

///----------------------------------------------------------------------
/// Friend Functions
///----------------------------------------------------------------------		
/// Checks if v1 == v2
bool operator==(const vec3& v1, const vec3& v2) {
	if(fabs(v1[0] - v2[0]) < 0.00001 && 
		fabs(v1[1] - v2[1]) < 0.00001 && 
		fabs(v1[2] - v2[2]) < 0.00001)
		return true;
	return false;
}

/// Checks if v1 != v2
bool operator!=(const vec3& v1, const vec3& v2) {
	if (fabs(v1[0] - v2[0]) > 0.00001 &&
		fabs(v1[1] - v2[1]) > 0.00001 &&
		fabs(v1[2] - v2[2]) > 0.00001)
		return true;
	return false;
	//is there a way to call the above function and just NOT it?
}

/// Vector Addition (v1 + v2)
vec3 operator+ (const vec3& v1, const vec3& v2) {
	vec3 temp;
	temp[0] = v1[0] + v2[0];
	temp[1] = v1[1] + v2[1];
	temp[2] = v1[2] + v2[2];
	return temp;

	return vec3(v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2]);
}

/// Vector Subtraction (v1 - v2)
  vec3 operator- (const vec3& v1, const vec3& v2) {
	vec3 temp;
	temp[0] = v1[0] - v2[0];
	temp[1] = v1[1] - v2[1];
	temp[2] = v1[2] - v2[2];
	return temp;
}

/// Scalar Multiplication (v * c)
 vec3 operator* (const vec3& v, float c) {
	vec3 temp;
	temp[0] = v[0] *c;
	temp[1] = v[1] * c;
	temp[2] = v[2] * c;
	return temp;
}

/// Scalar Multiplication (c * v)
 vec3 operator* (float c, const vec3& v) {

	return vec3(v[0] *c, v[1]*c, v[2]*c);
}

/// Scalar Division (v/c)
 vec3 operator/ (const vec3& v, float c) {
	 if (c == 0)
		 throw std::invalid_argument("Cannot divide by 0");
	return vec3(v[0]/c , v[1] /c , v[2] /c );
}

/// Dot Product (v1 * v2)
 float operator* (const vec3& v1, const vec3& v2) {

	 return (v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2]);
}

/// Cross Product (v1 % v2)
 vec3 operator% (const vec3& v1, const vec3& v2) {

	return vec3((v1[1] * v2[2])- (v1[2] * v2[1]),
		(v1[1] * v2[2]) - (v1[2] * v2[1]),
		(v1[1] * v2[2]) - (v1[2] * v2[1]));
}
