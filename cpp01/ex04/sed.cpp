#include "sed.hpp"

void    ft_chech_args(int ac)
{
    if (ac != 4)
    {
        std::cerr << "the program takes 3 params" << std::endl;
        exit(1);
    }
}

void    ft_chech_file(std::ifstream &inf)
{
    if (inf.fail())
    {
        std::cerr << "check the file please, can't be readed or does not exists." << std::endl;
        inf.close();
        exit(1);
    }
}
