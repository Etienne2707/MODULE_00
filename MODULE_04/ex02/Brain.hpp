#ifndef Brain_H
#define Brain_H

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    virtual ~Brain();
    Brain( Brain const & src );

    Brain & operator=(Brain const & rhs);
};


#endif