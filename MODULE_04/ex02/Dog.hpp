#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private :
    std::string type;
    Brain *brain;
public:
    Dog();
    ~Dog();
    Dog(std::string const name);
    Dog( Dog const & src );

    Dog & operator=(Dog const & rhs);
    void    makeSound(void) const;
    Brain* setBrain(void);
};


#endif