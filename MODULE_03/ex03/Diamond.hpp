#ifndef DIAMOND_H
# define DIAMOND_H

#include "Fragtap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    private :
    std::string _name;
    public :
        DiamondTrap();
       virtual ~DiamondTrap();
        DiamondTrap(std::string const name);
        DiamondTrap( DiamondTrap const & src );
        DiamondTrap & operator=(DiamondTrap const & rhs); 

        void    whoAmI(void);
        void	attack(const std::string &target);
};

#endif