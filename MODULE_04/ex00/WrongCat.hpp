#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class Wrongcat : public Wronganimal
{

protected :
    std::string type;
public:
    Wrongcat();
    ~Wrongcat();
    Wrongcat(std::string const name);
    Wrongcat( Wrongcat const & src );

    Wrongcat & operator=(Wrongcat const & rhs);
    void    makeSound(void)const;
};


#endif