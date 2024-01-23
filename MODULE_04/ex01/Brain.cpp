#include  "Animal.hpp"
#include "Brain.hpp"
#include <stdlib.h> 

Brain::Brain()
{
    int i;
    std::cout << " Brain Default constructor called" << std::endl;
    for (i = 0; i < 25; i++)
    {
        this->ideas[i] = "J'ai envie de dormir";
    }
    for (i = 25; i < 50; i++)
    {
        this->ideas[i] = "J'ai envie de manger";
    }
    for (i = 50; i < 75; i++)
    {
        this->ideas[i] = "J'ai envie de ...";
    }
    for (i = 75; i < 100; i++)
    {
        this->ideas[i] = "J'ai envie de jouer";
    }
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

std::string    Brain::getIdeas(void)
{
    int Id;
    Id = rand() % 100 + 1;
    std::cout << yellow << this->ideas[Id] << std::endl;
    return (this->ideas[Id]);
}
