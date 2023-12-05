#include <iostream>
#include <string>


char   toupper(char c)
{
    if (c >=97 && c <= 122)
        c -= 32;
    return (c);
}

int main(int ac, char **argv)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (int i = 1; argv[i]; i++)
    {
        for (int k = 0; argv[i][k]; k++)
        {
            std::cout << toupper(argv[i][k]);
        }    
    }
    return (1);
}
