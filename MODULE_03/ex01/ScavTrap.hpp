#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "Claptrap.hpp"


class ScavTrap : public Claptrap
{
    
private:
    
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string const name);
    ScavTrap( ScavTrap const & src );
    ScavTrap & operator=(ScavTrap const & rhs);

    void    guardGate(void);
    void attack(const std::string& target);


};

#endif