#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class weapon 
{
    private:
    std::string _type;

    public:
    weapon(std::string type);
    ~weapon();

    const std::string &get_type(void) const;
    void    set_type(std::string type);

};

#endif