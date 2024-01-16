#ifndef CAT_H
#define CAT_H

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{

protected :
    std::string type;
public:
    Cat();
    ~Cat();
    Cat(std::string const name);
    Cat( Cat const & src );

    Cat & operator=(Cat const & rhs);
    void    makeSound(void)const;
};


#endif