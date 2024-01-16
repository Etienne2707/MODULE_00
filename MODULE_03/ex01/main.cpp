#include "Claptrap.hpp"
#include "ScavTrap.hpp"


int  main( void )
{

    //Claptrap player("Hijodelaluna");

    ScavTrap robots("Robots");

   // player.attack("Nangoust");
    robots.attack("Nangoust");
   // player.stats();
    robots.stats();
    robots.guardGate();
    return 0;

}