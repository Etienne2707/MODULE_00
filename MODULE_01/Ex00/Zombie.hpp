#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string.h>


class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();
    void    announce(void);

};
    Zombie* newZombie(std::string name);
    void randomChump( std::string name );

#endif
