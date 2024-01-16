#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{

protected :
    std::string type;
public:
    Dog();
    ~Dog();
    Dog(std::string const name);
    Dog( Dog const & src );

    Dog & operator=(Dog const & rhs);
    void    makeSound(void) const;
};


#endif