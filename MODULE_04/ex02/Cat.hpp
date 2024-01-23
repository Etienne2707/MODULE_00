#ifndef CAT_H
#define CAT_H

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

private :
    std::string type;
    Brain *brain;
public:
    Cat();
    ~Cat();
    Cat(std::string const name);
    Cat( Cat const & src );

    Cat & operator=(Cat const & rhs);
    void    makeSound(void)const;
    Brain* setBrain(void);

};


#endif