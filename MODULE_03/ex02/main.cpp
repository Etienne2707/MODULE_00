#include "Claptrap.hpp"
#include "ScavTrap.hpp"
#include "Fragtap.hpp"


int  main( void )
{

    Claptrap player("Hijodelaluna");
    FragTrap cringe("Batard");
    ScavTrap robots("Robots");

    player.attack("Nangoust");
    robots.attack("Nangoust");
    player.stats();
    robots.stats();
    robots.guardGate();
    cringe.stats();
    cringe.highFivesGuys();
    cringe.highFivesGuys();
    return 0;

}