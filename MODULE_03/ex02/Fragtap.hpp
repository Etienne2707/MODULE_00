#ifndef FRAGTAP_H
# define FRAGTAP_H

#include "Claptrap.hpp"


class FragTrap : public Claptrap
{
    
private:
    bool _FGrequest;
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string const name);
    FragTrap( FragTrap const & src );
    FragTrap & operator=(FragTrap const & rhs);

    void    highFivesGuys(void);
    void attack(const std::string& target);


};

#endif