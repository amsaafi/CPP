#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "weapon.hpp"

class humanB
{
    private:
    std::string _name;
    weapon *_weapon;

    public:
    humanB(std::string name);
    ~humanB();

    void attack(void) const;
    weapon &getweapon() const;
    void setweapon(weapon & weap);
    void unsetWeapon(void);
};


#endif