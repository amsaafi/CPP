#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);

	FragTrap& operator=(FragTrap const &rhs);

	void	attack(const std::string& target);
	void	highFivesGuys(void);

};

#endif