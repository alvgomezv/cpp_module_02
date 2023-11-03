#include "Point.hpp"

int main(void)
{
	Point a(1, 1);
	Point b(1, 4);
	Point c(4, 4);

	Point point(4, 1);

	if (bsp(a, b, c, point))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;

	return 0;
}