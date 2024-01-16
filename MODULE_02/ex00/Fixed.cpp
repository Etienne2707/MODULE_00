#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << " Default constructor called" << std::endl;
    this->_Fvalue = 0;
}

Fixed::Fixed(int const n) :_Fvalue(n)
{
    std::cout << "Parametric constructor called" << std::endl;
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

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << "The value of _Fvalue : " << i.getRawBits();
    return o;
}