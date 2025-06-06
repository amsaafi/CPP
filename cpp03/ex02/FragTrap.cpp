#include "FragTrap.hpp"


FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap constructor called without the name" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called, named: " << this->_name << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called for " << this->_name << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs) {
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

void FragTrap::attack(const std::string& target) {
    if (this->_hp == 0)
        std::cout << "FragTrap " << this->_name << " can't attack because it's out of hit points :c" << std::endl;
    else if (this->_ep == 0)
        std::cout << "FragTrap " << this->_name << " is out of energy and can't attack!" << std::endl;
    else {
        std::cout << "FragTrap " << this->_name << " attacks " << target;
        std::cout << ", causing " << this->_ad << " points of damage!" << std::endl;
        this->_ep--;
    }
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->_name << " is trying to highfive!" << std::endl;
}