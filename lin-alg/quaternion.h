/* 
 * Quaternions
 *
 * This 
 *
 *
 *
 * */ 
#pragma once

#include <iostream>

class Quaternion
{
public:

	Quaternion();
	Quaternion(double w, double x, double y, double z);

	~Quaternion();

	// Unary operators
	Quaternion operator-() const; 
	Quaternion normalize() const;
	double 		 magnitude() const;
	Quaternion inverse  () const;
	Quaternion conjucate() const;

	// Binary operators
	Quaternion operator+(const Quaternion& other) const;
	Quaternion operator-(const Quaternion& other) const;
	Quaternion operator*(const Quaternion& other) const;
	Quaternion operator*(const double      other) const;
	Quaternion operator/(const Quaternion& other) const;
	Quaternion operator/(const double      other) const;
	
	
private:
	double scalers[4];

	// enum Q {
	// 	w=0, x=1, y=2, z=3
	// };

};
