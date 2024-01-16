#include "Zombie.hpp"


int main()
{

    std::string name;
    int N;

    std::cout << "Quelle non voulez vous donnez a votre hordre de Zombie" << std::endl;
    std::cin >> name;
    std::cout << "Très bon choix et combie de zombie voulez vous ?" << std::endl;
    std::cin >> N;

    Zombie *zombie = zombieHorde(N,name);

    delete []zombie;
}