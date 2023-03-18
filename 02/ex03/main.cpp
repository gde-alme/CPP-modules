#include "Point.hpp"
#include "Fixed.hpp"

int	main() {
	Fixed a(42);
	Point p(4.1f,2.3f);

	Point cp = p;
	std::cout << "x copy: " << cp.getX() << cp.getY() << std::endl;
}