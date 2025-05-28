#ifndef HUMAN_A
#define HUMAN_A

#include "weapon.hpp"

class humanA
{
    private:
    std::string _name;
    weapon &_weapon;

    public:
    humanA(std::string name, weapon &weapon);
    ~humanA();

    void attack(void) const;
    weapon &getweapon() const;
    void setweapon(weapon const & weap);
};


#endif