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
}
Fixed::Fixed(int const n) :_Fvalue(n)
{
    std::cout << "Parametric constructor called" << std::endl;
    this->_Fvalue = n << this->_Bits;
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

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->_Fvalue = rhs.getRawBits();
    return *this;
}

float Fixed::operator+(const Fixed &rhs) const {
    return (this->toFloat() + rhs.toFloat());
}
float Fixed::operator-(const Fixed &rhs) const
{
    return (this->toFloat() - rhs.toFloat());
}
float Fixed::operator*(const Fixed &rhs) const
{
    return (this->toFloat() * rhs.toFloat());
}
float Fixed::operator/(const Fixed &rhs) const
{
    if (rhs.toFloat() == 0)
        return (1);
    return (this->toFloat() / rhs.toFloat());
}
Fixed & Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_Fvalue++;
    return (*this);
}
Fixed & Fixed::operator--(int)
{
    Fixed temp;
    this->_Fvalue--;
    return (*this);
}
Fixed & Fixed::operator++()
{
    ++this->_Fvalue;
    return *this;
}
Fixed & Fixed::operator--()
{
    ++this->_Fvalue;
    return *this;
}

bool Fixed::operator==(const Fixed & rhs) const
{
    return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(const Fixed & rhs) const
{
   return (this->toFloat() != rhs.toFloat());
}
bool Fixed::operator>=(const Fixed & rhs) const
{
   return (this->toFloat() >= rhs.toFloat());
}
bool Fixed::operator<=(const Fixed & rhs) const
{
   return (this->toFloat() <= rhs.toFloat());
}
bool Fixed::operator>(const Fixed & rhs) const
{
   return (this->toFloat() > rhs.toFloat());
}
bool Fixed::operator<(const Fixed & rhs) const
{
   return (this->toFloat() < rhs.toFloat());
}
Fixed &Fixed::min(Fixed &ln, Fixed &rn)
{
    if (ln.toFloat() <= rn.toFloat())
        return (ln);
    else
        return (rn);
}

const Fixed &Fixed::min(const Fixed &ln, const Fixed &rn)
{
    if (ln.toFloat() <= rn.toFloat())
        return (ln);
    else
        return (rn);
}

Fixed &Fixed::max(Fixed &ln, Fixed &rn)
{
    if (ln.toFloat() >= rn.toFloat())
        return (ln);
    else
        return (rn);
}

const Fixed &Fixed::max(const Fixed &ln, const Fixed &rn)
{
    if (ln.toFloat() >= rn.toFloat())
        return (ln);
    else
        return (rn);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << "The value of _Fvalue : " << i.toFloat();
    return o;
}