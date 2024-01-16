#include "Harl.hpp"




Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void    Harl::debug(void)
{
    std::cout << "debug" << std::endl;
}


void    Harl::info(void)
{
    std::cout << "info" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "Warning" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "error" << std::endl;
}

void    Harl::complain(std::string level)
{

    void (Harl::*arPtr[4])(void) = {&Harl::debug, &Harl::info,&Harl:: warning, &Harl::error};
    std::string str[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i  <= 4;i++)
    {
        if (level.compare(str[i]) == 0)
        {
            (this->*arPtr[i])();
                return ;
        }
    }
    std::cout << "Karen n'as malheuresement pas le qi necessaire a cela" << std::endl;
    return ;
}

