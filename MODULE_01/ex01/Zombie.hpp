#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;
    int _N;
public:
    Zombie(std::string name, int N);
    ~Zombie();
};


Zombie* zombieHorde( int N, std::string name );

#endif