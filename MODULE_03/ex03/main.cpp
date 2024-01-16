#include "Claptrap.hpp"
#include "ScavTrap.hpp"
#include "Fragtap.hpp"
#include "Diamond.hpp"

int  main( void )
{

    Claptrap player("Romain");
    FragTrap cringe("Batard");
    ScavTrap robots("Etienne");
    DiamondTrap minipouce("Minipouce");

    player.attack("Noirs");
    robots.attack("Romain");
    player.stats();
    robots.stats();
    robots.guardGate();
    cringe.stats();
    cringe.highFivesGuys();
    cringe.highFivesGuys();
    minipouce.stats();
    minipouce.attack("Arabe");
    minipouce.whoAmI();
    return 0;

}