#include "Contact.hpp"
#include <string>
#include <iostream>

void    Contact::get_info(void)
{
    std::cout << "NAME" << std::endl;
    std::cin >> this->FNAME;
    std::cout << "LAST" << std::endl;
    std::cin >> this->LNAME;
    std::cout << "PHONE" << std::endl;
    std::cin >> this->PHONE;
    std::cout << "DSECRET" << std::endl;
    std::cin >> this->DSECRET;
}

void    Contact::get_index(int index)
{
    this->_index = index % 8;
        return ;
}

std::string   reduce_str(std::string str)
{
    if (str.size() <= 10)
        return (str);
    str = str.substr(0,9);
    str = str.insert(9,".");
    return (str);
}

void    Contact::print_contact(void)
{
    if (this->FNAME.empty() || this->LNAME.empty() || this->PHONE.empty() || this->DSECRET.empty())
        return ;
    std::cout << std::setw(3) << this->_index;
    std::cout << "|" << std::setw(10) << reduce_str(this->FNAME);
    std::cout << "|" << std::setw(10) << reduce_str(this->LNAME);
    std::cout << "|" << std::setw(10) << reduce_str(this->PHONE);
    std::cout << "|" << std::setw(10) << reduce_str(this->DSECRET) << "|" << std::endl;
}

