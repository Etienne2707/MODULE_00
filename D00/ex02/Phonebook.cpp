#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iomanip>



void    PhoneBook::add_book(void)
{
    static int i = 0;
    this->contacts[i % 8].get_info();
    this->contacts[i % 8].get_index(i);
    if (i <= 7)
        this->index_max = i;
    i++;
}

void    print_setup(void)
{
    std::cout << std::setw(3) << "No";
    std::cout << "|" << std::setw(10) << "NAME";
    std::cout << "|" << std::setw(10) << "LAST";
    std::cout << "|" << std::setw(10) << "PHONE";
    std::cout << "|" << std::setw(10) << "SECRET" << std::endl;
}

void    PhoneBook::print_search(void)
{
    int number;

    std::cout << "Alors qu'elle sera votre choix de Contact ?" << std::endl;
    std::cin >> number;
    if (number < 0 || number > 7 || this->index_max < number)
    {
        std::cout << "Numeros selectionner incorrect recommencer";
        print_search();
    }
    this->contacts[number].print_contact();
}

void    PhoneBook::print_book(void)
{
    print_setup();
    for (int i = 0; i < 8; i++)
    {
        this->contacts[i].print_contact();
    }

}