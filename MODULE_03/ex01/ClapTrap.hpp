#ifndef ClAPTRAP_H
# define ClAPTRAP_H


#include <iostream>
#include <string>
#include <cmath>


class Claptrap
{
protected:
    std::string _name;
    unsigned int _pHit;
    unsigned int _pEnergy;
    unsigned int _dAttack;
public:
    Claptrap();
    ~Claptrap();
    Claptrap(std::string const name);
    Claptrap( Claptrap const & src );

    Claptrap & operator=(Claptrap const & rhs);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void    stats(void);



};

#endif
