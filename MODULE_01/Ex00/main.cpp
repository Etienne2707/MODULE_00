#include "Zombie.hpp"


int main(int ac, char **argv)
{
    if (ac != 3)
        return (1);
    std::string name2 = argv[1];
    Zombie* zombie = newZombie(argv[1]);
    randomChump(argv[2]);


    delete  zombie;
    return (0);
}