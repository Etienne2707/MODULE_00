#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"
#include <string.h>
#include <iostream>

class PhoneBook
{
private:
    int index_max;
    Contact     contacts[8];
    
public:
    PhoneBook() {}
    ~PhoneBook() {}
    void    add_book(void);
    void    print_book(void);
    void    print_search(void);
};

#endif