#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _nb;
        static const int _fb = 8;
    public:
    Fixed();
    Fixed(int const n);
    Fixed(float const f);
    Fixed(Fixed const &src);
    ~Fixed();

    Fixed& operator=(Fixed const &rhs);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream& operator<<( std::ostream & o, Fixed const & i );


#endif