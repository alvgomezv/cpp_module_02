#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed	x;
		Fixed	y;
	
	public:
		Point(void);
		Point(Fixed x, Fixed y);
		~Point(void);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);

#endif