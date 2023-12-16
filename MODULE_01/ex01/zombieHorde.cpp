#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    return(new Zombie(name, N));
}
