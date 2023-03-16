#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed {
    private:
        int     _fixedPointValue;
        static  const   int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &oldfpn);
        ~Fixed();
        Fixed &operator=(const Fixed &oldfpn);
        int     getRawBits() const;
        void    setRawBits(int const raw);
};

#endif