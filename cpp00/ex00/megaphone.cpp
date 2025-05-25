#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int j = 1;
        while (j < ac)
        {
            int i = 0;
            while (av[j][i])
            {
                std::cout << (char)toupper(av[j][i]);
                i++;
            }
            j++;
        }
    }
    std::cout << std::endl;
    return 0;
}
