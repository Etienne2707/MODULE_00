#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "string.h"
#include <iostream>
#include <iomanip>  


void    first_message(void)
{
    std::cout << "Bienvenue dans ce Superbe PhonneBook !!" << std::endl;
    std::cout << "Voici les options possible de celui-ci" << std::endl;
    std::cout << "-ADD Qui vous permet d'ajouter un utilisateur" << std::endl;
    std::cout << "-SEARCH Qui vous afficheras tous les utilsateurs," << std::endl;
    std::cout << "apres avoir afficher  vous pourrez choisir lequel vous choissisez !" << std::endl;
    std::cout << "-EXIT Vous permet comme son nom l'indique de quitter ce Super PhoneBook" << std::endl;
    std::cout << std::endl << "Capacite de contact : 8 peut etre augmenter avec PhoneBook+ a seulement 5$ !" << std::endl;
}

int main(int ac, char **argv)
{

    (void)ac;
    (void)argv;
    std::string str  = "";
    Contact instance;
    PhoneBook phone;
    first_message();
    std::cout << "PhoneBook : ";
    std::cin >> str;
    while (str.compare("EXIT") != 0)
    {
        if (str.compare("ADD") == 0)
        {
            phone.add_book();
        }
        else if (str.compare("SEARCH") == 0)
        {
            phone.print_book();
            phone.print_search();
        }
        std::cout << "PhoneBook : ";
        std::cin >> str;
    }

    return (1);
}