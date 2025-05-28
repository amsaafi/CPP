#include "HumanB.hpp"

humanB::humanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

humanB::~humanB(){}

void humanB::attack(void) const
{
    if(!this->_weapon)
        std::cout << this->_name << " is unarmed " << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->get_type() << std::endl;
}


weapon &humanB::getweapon(void) const {
	return (*this->_weapon);
}

void humanB::setweapon(weapon &weap) {
    this->_weapon = &weap;
}

void humanB::unsetWeapon(void) {
    this->_weapon = NULL;
}