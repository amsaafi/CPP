#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class harl
{
    private:
        void    debug();
        void    info();
        void    warning();
        void    error();
    public:
        harl();
        ~harl();
        void    complain(std::string level);

        typedef void (harl::*harlfunction)();
        int getHash(const std::string& str);
};


#endif