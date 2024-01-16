
#include "Diamond.hpp"
#include "ScavTrap.hpp"
#include "Fragtap.hpp"
#include "Claptrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << " Default Diamond constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : Claptrap(name + "_clap_trap") 
{
    std::cout << "Parametric Diamond constructor called name" << this->_name << std::endl;
    this->_dAttack = FragTrap::_dAttack;
    this->_pEnergy = ScavTrap::_pEnergy;
    this->_pHit = FragTrap::_pHit;
    this->_name = "Default";
    std::cout << ScavTrap::_pEnergy << this->_pEnergy << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor Diamond called" << std::endl;
}


DiamondTrap::DiamondTrap( DiamondTrap const & src ){
    std::cout << " Copy constructeur called" << std::endl;
    *this = src;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_pHit = rhs._pHit;
        this->_pEnergy = rhs._pEnergy;
        this->_dAttack = rhs._dAttack;
    }
    return *this;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << this->_dAttack << this->_pEnergy << this->_pHit << std::endl;
    std::cout << "His name : " << this->_name << std::endl;
    std::cout << "His Claptrap name : " << Claptrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
