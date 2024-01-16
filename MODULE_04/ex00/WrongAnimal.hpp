#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>
#include <iostream>

class Wronganimal
{

protected :
    std::string type;
public:
    Wronganimal();
    virtual ~Wronganimal();
    Wronganimal( Wronganimal const & src );

    Wronganimal & operator=(Wronganimal const & rhs);
    void    makeSound(void)const ;
    std::string const &getType(void) const;
};


#endif