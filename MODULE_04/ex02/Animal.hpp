#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{

protected :
    std::string type;
    Animal();
public:
    
    virtual ~Animal();
    Animal( Animal const & src );

    Animal & operator=(Animal const & rhs);
    virtual void    makeSound(void)const = 0;
    std::string const &getType(void) const;
};


#endif