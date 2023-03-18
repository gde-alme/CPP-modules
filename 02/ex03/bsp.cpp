#include "Point.hpp"

static Fixed abs(Fixed a) {
	if ((a < Fixed(0)) == true)
		return (a * -1);
	return (a);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	/* 1. Calculate area of triangle formed by the 3 points */
	Fixed ga = Fixed(0.5f) * abs((a.getX() * (b.getY() - c.getY())) + \
		(b.getX() * (c.getY() - a.getY())) + \
		(c.getX() * (a.getY() - b.getY())));

	/* 2. Calculate area of the three triangles formed by the point 
		and each of the sides of the original triangle */
	Fixed a1 = Fixed(0.5f) * abs(point.getX() * (b.getY() - c.getY()) + \
		(b.getX() * (c.getY() - point.getY())) + \
		(c.getY() * (point.getY() - b.getY())));

	/* 3. If the sum of the three triangles is equal to the area of 
		the original triangle, then the point is inside */
	point.getX();

	std::cout << "triangle area: " << ga.toFloat() << std::endl;

	return (true);
}