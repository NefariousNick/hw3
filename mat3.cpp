/*
*	mat3.cpp	
*/
//Nicholas Wagner
//G00860846
//CS351
//HW2
#include "mat3.h"
#include <math.h>
#include <assert.h>
#include <iostream>
#include <stdio.h>

///----------------------------------------------------------------------
/// Constructors
///----------------------------------------------------------------------
/// Default Constructor.  Initialize to identity matrix .
mat3::mat3(){
/*	for(int i=0;i<3;i++)
		data[i] = vec3(0, 0, 0);
*/
	data[0] = vec3(1, 0, 0);
	data[1] = vec3(0, 1, 0); 
	data[2] = vec3(0, 0, 1);
}

/// Initializes matrix with each vector representing a row in the matrix
mat3::mat3(const vec3& row1, const vec3& row2, const vec3& row3){

	data[0] = row1;
	data[1] = row2;
	data[2] = row3;
}

///----------------------------------------------------------------------
/// Getters
///----------------------------------------------------------------------	
/// Returns the values of the row at the index
vec3 mat3::operator[](unsigned int index) const{
assert(index > 0 || index < 2);
return data[index];
}

/// Returns a reference to the row at the index
vec3& mat3::operator[](unsigned int index){
	assert(index > 0 || index < 2);
	return data[index];
}

/// Returns a column of the matrix
vec3 mat3::getColumn(unsigned int index) const{
	if (index < 0 || index > 2)
		throw std::invalid_argument("Index out of range.");
	return vec3(data[0][index], data[1][index], data[2][index]);
}

/// Prints the matrix to standard output in a nice format
void mat3::print(){
std::cout << printf("{[%f, %f, %f]\n [%f, %f, %f]\n [%f, %f, %f]}",
	data[0][0], data[0][1], data[0][2],
	data[1][0], data[1][1], data[1][2],
	data[2][0], data[2][1], data[2][2]);
}

///----------------------------------------------------------------------
/// Matrix Operations
///----------------------------------------------------------------------	
/// Returns the transpose of the matrix (v_ij == v_ji)
mat3 mat3::transpose() const{
	return mat3(getColumn(0),getColumn(1),getColumn(2));
}

///----------------------------------------------------------------------
/// Static Initializers
///----------------------------------------------------------------------	
/// Creates a 3-D rotation matrix.
/// Takes an angle in degrees and outputs a 3x3 rotation matrix
mat3 mat3::rotation2D(float angle){
	return mat3(vec3(cos(angle),sin(angle),0),
			vec3(-sin(angle),cos(angle),0),
			vec3(0,0,1));
}

/// Takes an x and y displacement and outputs a 3x3 translation matrix
mat3 mat3::translation2D(float x, float y){
	return mat3(vec3(1,0, x),
			vec3(0,1, y), 
			vec3(0,0, 1));
}



/// Takes an x and y scale and outputs a 3x3 scale matrix
mat3 mat3::scale2D(float x, float y){
	return mat3(vec3(x,0,0),
			vec3(0,y,0),
			vec3(0,0,1));
}

/// Generates a 3x3 identity matrix
mat3 mat3::identity(){
	return mat3(vec3(1,0,0),
			vec3(0,1,0),
			vec3(0,0,1));
}

///----------------------------------------------------------------------
///  Functions
///----------------------------------------------------------------------
/// Checks if m1 == m2
bool operator ==(const mat3& m1, const mat3& m2){
	return m1.data[0] == m2.data[0] &&
			m1.data[1] == m2.data[1] &&
			m1.data[2] == m2.data[2];
}

/// Checks if m1 != m2
bool operator !=(const mat3& m1, const mat3& m2){
	return m1.data[0] != m2.data[0] &&
			m1.data[1] != m2.data[1] &&
			m1.data[2] != m2.data[2];
}

/// Matrix addition (m1 + m2)
mat3 operator + (const mat3& m1, const mat3& m2){
	return mat3(m1.data[0] + m2.data[0],
				m1.data[1] + m2.data[1],
				m1.data[2] + m2.data[2]);
}

/// Matrix subtraction (m1 - m2)
mat3 operator - (const mat3& m1, const mat3& m2){
	return mat3(m1.data[0] - m2.data[0],
				m1.data[1] - m2.data[1],
				m1.data[2] - m2.data[2]);
}

/// Scalar multiplication (m * c)
mat3 operator * (const mat3& m, float c){
	return mat3(m.data[0] * c,
				m.data[1] * c,
				m.data[2] * c);
}

/// Scalar multiplication (c * m)
mat3 operator * (float c, const mat3& m){
	return mat3(c * m.data[0],
				c * m.data[1],
				c* m.data[2]);
}

/// Scalar division (m / c)
mat3 operator / (const mat3& m, float c){
	if (c == 0)
		throw std::invalid_argument("Cannot divide by 0");

	return mat3(m.data[0] / c,
				m.data[1] / c,
				m.data[2] / c);
}

/// Matrix multiplication (m1 * m2)
mat3 operator * (const mat3& m1, const mat3& m2){
	return mat3(
		vec3(m1.data[0] * m2.getColumn(0), m1.data[0] * m2.getColumn(1), m1.data[0] * m2.getColumn(2)),
		vec3(m1.data[1] * m2.getColumn(0), m1.data[1] * m2.getColumn(1), m1.data[1] * m2.getColumn(2)),
		vec3(m1.data[2] * m2.getColumn(0), m1.data[2] * m2.getColumn(1), m1.data[2] * m2.getColumn(2)));
}

/// Matrix/vector multiplication (m * v)
/// Assume v is a column vector (ie. a 3x1 matrix)
vec3 operator * (const mat3& m, const vec3& v){
	return vec3(m.data[0] * v, m.data[1] * v, m.data[2] * v);
}

/// Vector/matrix multiplication (v * m)
/// Assume v is a row vector (ie. a 1x3 matrix)
vec3 operator * (const vec3& v, const mat3& m){
	//return vec3(m.getColumn.data[0] * v, m.data[1] * v, m.data[2] * v);
	//how to deal with zeroes in vec3?
	return vec3(v * m.getColumn(0), v * m.getColumn(1), v * m.getColumn(2));
}
