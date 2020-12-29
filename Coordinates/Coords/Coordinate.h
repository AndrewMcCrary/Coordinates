// TwoDCoordinate.h

#pragma once
#include "Coordinate_Incl.h"

class Coord
{
private:

	float X, Y, Z;

public:


	Coord(float x, float y, float z) {
		this->X = x;
		this->Y = y;
		this->Z = z;
	}

	// Getters
	float getX() const { return this->X; }
	float getY() const { return this->Y; }
	float getZ() const { return this->Z; }

	// Setters
	void setX(float x) { this->X = x; }
	void setY(float y) { this->Y = y; }
	void setZ(float z) { this->Z = z; }

	// Four function operators
	Coord operator+(const Coord& ptr) const {
		return Coord(this->getX() + ptr.getX(), this->getY() + ptr.getY(), this->getZ() + ptr.getZ());
	}

	Coord operator-(const Coord& ptr) const {
		return Coord(this->getX() - ptr.getX(), this->getY() - ptr.getY(), this->getZ() - ptr.getZ());
	}

	Coord operator*(const Coord& ptr) const {
		return Coord(this->getX() * ptr.getX(), this->getY() * ptr.getY(), this->getZ() * ptr.getZ());
	}

	Coord operator/(const Coord& ptr) const {
		return Coord(this->getX() / ptr.getX(), this->getY() / ptr.getY(), this->getZ() / ptr.getZ());
	}

	// Magnitude
	float Magnitude() const {
		return sqrt(pow(this->getX(), 2) + pow(this->getY(), 2) + pow(this->getZ(), 2));
	}

	static float Magnitude(const Coord& ptr) {
		return sqrt(pow(ptr.getX(), 2) + pow(ptr.getY(), 2) + pow(ptr.getZ(), 2));
	}

	// Scalar multiplication
	Coord Scale(float a) const {
		return Coord(this->getX() * a, this->getY() * a, this->getZ() * a);
	}
};
