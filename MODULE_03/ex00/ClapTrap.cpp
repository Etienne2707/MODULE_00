#include "ClapTrap.hpp"

Claptrap::Claptrap()
{
    std::cout << " Default constructor called" << std::endl;
}

Claptrap::Claptrap(std::string const name) :_name(name)
{
    std::cout << "Parametric constructor called" << std::endl;
    this->_dAttack = 0;
    this->_pEnergy = 10;
    this->_pHit = 10;
}

Claptrap::~Claptrap()
{
    std::cout << "Destructor called" << std::endl;
}

Claptrap::Claptrap( Claptrap const & src ){
    std::cout << " Copy constructeur called" << std::endl;
    *this = src;
}

Claptrap & Claptrap::operator=(Claptrap const & rhs)
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

void    Claptrap::attack(const std::string& target)
{
    if (this->_pEnergy == 0 || this->_pHit == 0)
    {
        std::cout << "Energy low need to recharge before attacking" << std::endl;
        return ;
    }
    else
    {
        this->_pEnergy -= 1;
        std::cout << this->_name << " : attack enemy " << target << " causing 10" << " points of damage !" << std::endl;
    }
}

void    Claptrap::takeDamage(unsigned int amount)
{
    if (this->_pHit == 0)
    {
        std::cout << this->_name << " : is aldready dead !" << std::endl;
        return ;
    }
    if (this->_pHit <= amount)
    {
        std::cout << this->_name << " : has been slay" << std::endl;
        this->_pHit = 0;
        return ;
    }
    this->_pHit -= amount;
    std::cout << this->_name << " : take " << amount << " damage, he have " << this->_pHit << "HP left !" << std::endl;
    return ;
}

void    Claptrap::beRepaired(unsigned int amount)
{
    if (this->_pEnergy == 0 || this->_pHit == 0)
    {
        std::cout << "Energy low need to recharge before attacking" << std::endl;
        return ;
    }
    this->_pEnergy += amount;
    if (this->_pEnergy > 10)
        this->_pEnergy = 10;
    std::cout << "Energy repair,  Energy :" << this->_pEnergy << std::endl;
    return ;
}

void    Claptrap::stats(void)
{
    std::cout << "HP:" << this->_pHit << "/10" << std::endl;
    std::cout << "Energy:" << this->_pEnergy << "/10" << std::endl;
}
