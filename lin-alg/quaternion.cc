#include "quaternion.h"

Quaternion::Quaternion()
{
	for (int i = 0; i < 4; ++i) this->scalers[i] = 0;
}

Quaternion::Quaternion(double w, double x, double y, double z)
{
	this->scalers[0] = w;
	this->scalers[1] = x;
	this->scalers[2] = y;
	this->scalers[3] = z;
}

Quaternion Quaternion::operator-() const 
// Negation operator
{
	Quaternion new_quat;
	for (int i = 0; i < 4; ++i) new_quat.scalers[i] = -1 * this->scalers[i];
	return new_quat;
}

Quaternion Quaternion::normalize() const
{
	return *this / this->magnitude();
}

double Quaternion::magnitude() const
{
	
}

Quaternion Quaternion::inverse  () const
{

}

Quaternion Quaternion::conjucate() const
{

}

Quaternion Quaternion::operator+(const Quaternion& other) const
{
	Quaternion new_quat;
	for (int i = 0; i < 4; ++i)	new_quat.scalers[i] = this->scalers[i] + other.scalers[i];

	return new_quat;
}

Quaternion Quaternion::operator-(const Quaternion& other) const
{
	Quaternion new_quat;
	for (int i = 0; i < 4; ++i)	new_quat.scalers[i] = this->scalers[i] - other.scalers[i];
	return new_quat;
}

Quaternion Quaternion::operator*(const Quaternion& other) const
{

}

Quaternion Quaternion::operator/(const Quaternion& other) const
{
	

}

Quaternion Quaternion::operator*(const double other) const
{
	Quaternion new_quat;
	for (int i = 0; i < 4; ++i)	new_quat.scalers[i] = this->scalers[i] * other; 
	return new_quat;
	
}
Quaternion Quaternion::operator/(const double other) const
{
	Quaternion new_quat;
	for (int i = 0; i < 4; ++i)	new_quat.scalers[i] = this->scalers[i] / other; 
	return new_quat;
}
