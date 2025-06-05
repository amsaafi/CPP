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


    int operator>(Fixed const &rhs) const;
    int operator<(Fixed const &rhs) const;
    int operator>=(Fixed const &rhs) const;
    int operator<=(Fixed const &rhs) const;
    int operator==(Fixed const &rhs) const;
    int operator!=(Fixed const &rhs) const;

    Fixed operator+( Fixed const & rhs) const;
    Fixed operator-( Fixed const & rhs) const;
    Fixed operator*( Fixed const & rhs) const;
    Fixed operator/( Fixed const & rhs) const;

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    
    static const Fixed &min(Fixed const &a, Fixed const &b);
    static const Fixed &max(Fixed const &a, Fixed const &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream& operator<<( std::ostream & o, Fixed const & i );


#endif