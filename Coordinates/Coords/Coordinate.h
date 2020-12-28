// TwoDCoordinate.h

#pragma once
#include "Coordinate_Incl.h"

template <typename T>
class Coord
{
private:

	T X, Y, Z;

public:


	Coord(T x, T y, T z) {
		this->X = x;
		this->Y = y;
		this->Z = z;
	}

	T getX() { return this->X; }
	T getY() { return this->Y; }
	T getZ() { return this->Z; }


};

