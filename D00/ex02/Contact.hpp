#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iomanip>  


class Contact
{
private:
    std::string FNAME;
    std::string LNAME;
    std::string PHONE;
    std::string DSECRET;
    int _index;
public:
    Contact() {}
    ~Contact() {}
    void    get_info(void);   
    void    get_index(int index);    
    void    print_contact(void);

};


#endif