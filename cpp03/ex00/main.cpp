#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap popi("koki");
	ClapTrap loli;
	ClapTrap sosi = popi;

	popi.attack("fofi");
	popi.takeDamage(9);
	popi.takeDamage(2);
	popi.beRepaired(11);
	popi.attack("fofi");
	popi.beRepaired(11);
	popi.beRepaired(11);
	std::cout << std::endl << "Now attack with sosi, that is a copy of popi, so they have the same name, but sosi have ep left" << std::endl << std::endl;
	sosi.attack("coci");
}
