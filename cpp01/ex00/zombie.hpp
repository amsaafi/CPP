#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class   zombie
{
    private:
    std::string _name;

    public:
    zombie(std::string name);
    ~zombie();

    void    announce(void) const;


};


void    randomChump(std::string name);
zombie *newzombie(std::string name);

#endif

