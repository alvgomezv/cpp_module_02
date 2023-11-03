#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	return;
}

Point::Point(Fixed x, Fixed y) : x(x), y(y)
{
	return;
}

Point::~Point(void)
{
	return;
}

Fixed	Point::getX(void) const
{
	return this->x;
}

Fixed	Point::getY(void) const
{
	return this->y;
}