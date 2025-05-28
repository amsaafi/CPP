#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class zombie
{
    private:
    std::string _name;

    public:
    zombie();
    zombie(std::string name);
    ~zombie();

    void    announce(void) const;
    void    setName(std::string name);

};

void    randomChump(std::string name);
zombie  *newzombie(std::string name);
zombie  *zombieHorde( int N, std::string name );

#endif