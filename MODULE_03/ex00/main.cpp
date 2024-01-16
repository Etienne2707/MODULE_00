#include "Claptrap.hpp"



int  main( void )
{

    Claptrap player("Hijodelaluna");
    int choose;
    while (-1)
    {
        std::cout << "1.Attacking 2.Damaged 3.Repair" << std::endl;
        std::cin >> choose;
        switch (choose)
        {
            case 1:
                player.attack("Nangoust");
                break;
            case 2:
                player.takeDamage(2);
                break;
            case 3 :
                player.beRepaired(1);
                break;
        }
        player.stats();
    }
    return 0;

}