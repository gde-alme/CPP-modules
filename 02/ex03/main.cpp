#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(int argc, char **argv) {
	Point	a(42, 24);
	Point	p(2, 2);
	Point	d(4, 2);
	Point	c(3, 13);

	if (argc != 3) {
		std::cout << "Usage: ./bsp point_x_coordenate point_y_coordenate" << std::endl;
		return (0);
	}

	if (bsp(p, d, c, Point(atoi(argv[1]),atoi(argv[2]))))
		std::cout << "Yes it is" << std::endl;
	else
		std::cout << "Nop" << std::endl;
}