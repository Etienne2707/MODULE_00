#include "Brain.hpp"


Brain::Brain()
{
    std::cout << " Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain( Brain const & src ){
    std::cout << "Brain Copy constructeur called" << std::endl;
    *this = src;
}

Brain & Brain::operator=(Brain const & rhs)
{
    std::cout << "Brain Assignment operator called" << std::endl;
    (void)rhs;
    return *this;
}