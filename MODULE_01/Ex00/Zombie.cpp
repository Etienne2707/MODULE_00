#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie du nom de " << this->_name << " est nee" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie du nom de " << this->_name << " est mort" << std::endl;
}


Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}

void randomChump( std::string name )
{
    Zombie zombie = Zombie(name);
    zombie.announce();
}


void    Zombie::announce(void)
{
    if (this->_name.compare("Foo") == 0)
        std::cout  << this->_name << ": " << "Brainzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"  << std::endl;
    else
        std::cout  << '<' << this->_name << '>' << ": " << "Brainzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
}