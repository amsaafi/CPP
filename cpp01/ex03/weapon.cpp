#include "weapon.hpp"

weapon::weapon(std::string type) : _type(type) {}

weapon::~weapon(){}

const std::string &weapon::get_type() const
{
    return(_type);
}

void weapon::set_type(std::string type)
{
    this->_type = type;
}
