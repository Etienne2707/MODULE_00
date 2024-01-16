#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << " Default constructor called" << std::endl;
    this->_Fvalue = 0;
}

Fixed::Fixed(const float n)
{
   std::cout << "Parametric Floatconstructor called" << std::endl;
    this->_Fvalue = roundf(n * (1 << this->_Bits));
    std::cout << "valeur float : " << this->_Fvalue;
}
Fixed::Fixed(int const n) :_Fvalue(n)
{
    std::cout << "Parametric constructor called" << std::endl;
    this->_Fvalue = n << this->_Bits;
    std::cout << "valeur int : " << this->_Fvalue;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ){
    std::cout << " Copy constructeur called" << std::endl;
    *this = src;
}

int     Fixed::getRawBits(void) const {

    std::cout << "Get member fonction call" << std::endl;
    return this->_Fvalue;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->_Fvalue = rhs.getRawBits();
    return *this;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "Set member fonction call" << std::endl;
    this->_Fvalue = raw;
}

float Fixed::toFloat( void ) const
{
    float resultat = static_cast<float>(_Fvalue) / static_cast<float>(1 << _Bits);
    return resultat;
}

int	Fixed::toInt(void)const
{
	return (this->_Fvalue >> this->_Bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << "The value of _Fvalue : " << i.toFloat();
    return o;
}