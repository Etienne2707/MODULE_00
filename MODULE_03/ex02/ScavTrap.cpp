#include "Scavtrap.hpp"
#include "Claptrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << " Default Scav constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : Claptrap(name)
{
    std::cout << "Parametric Scav constructor called name" << this->_name << std::endl;
    this->_dAttack = 20;
    this->_pEnergy = 50;
    this->_pHit = 100;
    this->_gState = false;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor Scav called" << std::endl;
}


ScavTrap::ScavTrap( ScavTrap const & src ){
    std::cout << " Copy constructeur called" << std::endl;
    *this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void    ScavTrap::guardGate(void)
{
    if (this->_gState == false)
    {
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
        this->_gState = true;
    }
    else
        std::cout << "Aldready in guardian mode" << std::endl ; 
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_pEnergy == 0 || this->_pHit == 0)
    {
        std::cout << " ScavRobts : Energy low need to recharge before attacking" << std::endl;
        return ;
    }
    else
    {
        this->_pEnergy -= 1;
        std::cout << "ScavRobots" << " : attack enemy " << target << " causing "<< this->_pHit << " points of damage !" << std::endl;
    }
}