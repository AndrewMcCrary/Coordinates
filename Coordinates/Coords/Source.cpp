// Source.cpp

#include "Coordinate.h"

// int, long
int main(void) {
	Coord* c_ptr1 = new Coord(10, 5, 3);
	Coord* c_ptr2 = new Coord(5, 22, 8);

	Coord test = *c_ptr1 * *c_ptr2;

	std::cout << test.getX() << std::endl;
	std::cout << test.getY() << std::endl;
	std::cout << test.getZ() << std::endl;


	system("pause");
	return 0;
}