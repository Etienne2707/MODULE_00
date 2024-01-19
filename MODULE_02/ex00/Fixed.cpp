#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "\033[1;32m"<< "Default constructor called" << "\033[0m"<< std::endl;
    this->_Fvalue = 0;
}

Fixed::Fixed(int const n) :_Fvalue(n)
{
    std::cout << "\033[1;32m"<< "Parametric constructor called" << "\033[0m"<< std::endl;
}

Fixed::~Fixed()
{
    std::cout << "\033[1;31m" << "Destructor called" << "\033[0m" << std::endl;
}

Fixed::Fixed( Fixed const & src ){
    std::cout <<  "\033[1;33m" << "Copy constructeur called" << "\033[0m" << std::endl;
    *this = src;
}

int     Fixed::getRawBits(void) const {

    std::cout << "\033[1;33m" << "Get member fonction call \033[0m" << std::endl;
    return this->_Fvalue;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "\033[1;33m" << "Assignment operator called \033[0m" << std::endl;
    if (this != &rhs)
        this->_Fvalue = rhs.getRawBits();
    return *this;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "\033[1;33m" << "Set member fonction call \033[0m" << std::endl;
    this->_Fvalue = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << "\033[1;33m" << "The value of _Fvalue : " << "\033[0m" << i.getRawBits();
    return o;
}