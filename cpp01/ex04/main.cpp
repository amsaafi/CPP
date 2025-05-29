#include "sed.hpp"

int main(int ac, char **av)
{

    ft_chech_args(ac);
    
    std::ifstream infile(av[1]);
    ft_chech_file(infile);
    std::ofstream repfile;
    
    size_t      pos;
    std::string tmp = av[1];
    std::string from = av[2];
    std::string to = av[3];

	if (from[0] == '\0')
	{
		std::cerr << "the string must not be empty!" << std::endl;
		return (1);
	}
    tmp.append(".replace");
    repfile.open(tmp.c_str());
    
    while (std::getline(infile, tmp))
    {
        pos = tmp.find(from, 0);
        while (pos != tmp.npos)
        {
            tmp.erase(pos, from.length());
            tmp.insert(pos, to);
            pos = tmp.find(from, 0);
        }
        repfile << tmp << std::endl;
    }
    infile.close();
    repfile.close();

}
