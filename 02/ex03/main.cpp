#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main() {
	Fixed	a(42);
	Point	p(2,2);
	Point	d(4, 4);
	Point	c(3, 13);

	Point cp = p;
	std::cout << "x copy: " << cp.getX() << std::endl << "y copy: " << std::endl << cp.getY() << std::endl;

	if (bsp(p, d, c, Point(1,1)))
		std::cout << "yes it is" << std::endl;
	else
		std::cout << "nop" << std::endl;
}