
#include "Harl.hpp"


int main(int ac, char **argv)
{
    if (ac != 2)
    {
        std::cout  <<  "[ I am not sure how tired I am today... ]" << std::endl;
        return (-1);
    }
    Harl karen;
    
    karen.complain(argv[1]);

}