#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int     _fixedPointValue;
        static  const   int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed &oldfpn);
        ~Fixed();
        Fixed &operator=(const Fixed &oldfpn);
        int     getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat() const;
        int     toInt() const;
};

std::ostream	&operator<<(std::ostream &ostreamf, Fixed const &FixedC);

#endif