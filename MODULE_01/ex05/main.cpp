
#include "Harl.hpp"


int main(int ac, char **argv)
{
    if (ac != 2)
        return (-1);
    Harl karen;

    karen.complain(argv[1]);

}