#include "Claptrap.hpp"
#include "Fragtap.hpp"

FragTrap::FragTrap()
{
    std::cout << " Default Scav constructor called" << std::endl ;
}

FragTrap::FragTrap(std::string const name) : Claptrap(name)
{
    std::cout << "Parametric Diamond constructor called name" << this->_name << std::endl;
    this->_dAttack = 0;
    this->_pEnergy = 100;
    this->_pHit = 300;
    this->_FGrequest = false;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor Diamond called" << std::endl;
}


FragTrap::FragTrap( FragTrap const & src ){
    std::cout << " Copy constructeur called" << std::endl;
    *this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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


void    FragTrap::highFivesGuys(void)
{
    if (this->_FGrequest == false)
    {
        std::cout << "Higth Five request launch wait for response" << std::endl;
        this->_FGrequest = true;
    }
    else
        std::cout << "You aldready do this ang got no response stop you will make you a looooser !" << std::endl;
}