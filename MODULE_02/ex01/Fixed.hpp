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

    void setRawBits( int const raw );
    int getRawBits(void) const ;
    float toFloat( void ) const;
    int toInt(void)const;


};

std::ostream & operator<<( std::ostream & o, Fixed const & i);
