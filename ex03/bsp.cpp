#include "Point.hpp"

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
	Fixed alpha = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) /
                  ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
    Fixed beta = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) /
                 ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
	Fixed gamma(1);
	gamma = gamma - alpha - beta;

    return alpha >= 0 && beta >= 0 && gamma >= 0;
}