#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int _Fvalue;
    static const int _Bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(int const n);
    Fixed(const float n);
    Fixed( Fixed const & src );

    Fixed & operator=(Fixed const & rhs);
    float operator+(const Fixed &rhs) const;
    float operator-(const Fixed & rhs) const;
    float operator*(const Fixed & rhs) const;
    float operator/(const Fixed & rhs) const;
    Fixed & operator++(int);
    Fixed & operator--(int);
    Fixed & operator++();
    Fixed & operator--();
    bool operator==(const Fixed & rhs) const;
    bool operator!=(const Fixed & rhs) const;
    bool operator>=(const Fixed & rhs) const;
    bool operator<=(const Fixed & rhs) const;
    bool operator>(const Fixed & rhs) const;
    bool operator<(const Fixed & rhs) const;

    static const Fixed &min( const Fixed &ln, const Fixed &rn);
    static  Fixed &min(Fixed &ln, Fixed &rn);
    static Fixed &max(Fixed &ln, Fixed &rn);
    static  const Fixed &max(const Fixed &ln, const Fixed &rn);
    void setRawBits( int const raw );
    int getRawBits(void) const ;
    float toFloat( void ) const;
    int toInt(void)const;



};

std::ostream & operator<<( std::ostream & o, Fixed const & i);
