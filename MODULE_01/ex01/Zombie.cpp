#include "Zombie.hpp"

Zombie::Zombie(std::string name, int N) : _name(name) , _N(N)
{
    int i;
    i = 1;
    while (i != this->_N)
    {
        std::cout <<this->_name;
        std::cout << "Le Zombie" << i << "prenom :" << this->_name << "est née" << std::endl;
        i++;
    }
}

Zombie::~Zombie()
{
    static int i;
    i = 1;
    while (i != this->_N)
    {
        std::cout << "Le Zombie" << i << "prenom :" << this->_name << "est née" << std::endl;
        i++;
    }
}