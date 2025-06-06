#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("unamed"), _hp(10), _ep(10), _ad(0) {
	std::cout << "ClapTrap constructor called without the name" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0) {
	std::cout << "ClapTrap constructor called, named: " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "ClapTrap copy constructor called for " << this->_name << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs) {
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
    if (this->_hp == 0)
        std::cout << "ClapTrap " << this->_name << " can't attack because it's out of hit points :c" << std::endl;
    else if (this->_ep == 0)
        std::cout << "ClapTrap " << this->_name << " is out of energy and can't attack!" << std::endl;
    else {
        std::cout << "ClapTrap " << this->_name << " attacks " << target;
        std::cout << ", causing " << this->_ad << " points of damage!" << std::endl;
        this->_ep--;
    }
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " take " << amount;
	if (amount >= this->_hp)
	{
		std::cout << " and is out of hit points :c" << std::endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp -= amount;
		std::cout << " and have " << this->_hp << " remaining" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_ep > 0)
	{
		std::cout << "ClapTrap " << this->_name << " is getting repaired of " << amount;
		this->_hp += amount;
		std::cout << " and now have " << this->_hp << " remaining" << std::endl;
		_ep--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of energy points and can't be repaired!" << std::endl;
}