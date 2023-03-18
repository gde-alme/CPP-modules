#ifndef __POINT_HPP__
#define __POINT_HPP__

# include "Fixed.hpp"

# include <iostream>

class Point {
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point(void);
		Point(const float v1, const float v2);
		Point(const Point &oldp);
		Point	&operator=(const Point &parent);
        ~Point(void);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		void	setX(Fixed const &fnum);
		void	setY(Fixed const &fnum);
};

#endif