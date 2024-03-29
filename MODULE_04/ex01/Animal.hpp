#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");
const int array_size = 10;

class Animal
{

protected :
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal( Animal const & src );

    Animal & operator=(Animal const & rhs);
    virtual void    makeSound(void)const;
    std::string const &getType(void) const;
};


#endif