#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "\n=== ClapTrap Test ===\n" << std::endl;

    ClapTrap ct1("Clappy");
    ct1.attack("enemy1");
    ct1.takeDamage(5);
    ct1.beRepaired(3);
    ct1.takeDamage(10);
    ct1.attack("enemy2");
    ct1.beRepaired(5);

    std::cout << "\n=== ScavTrap Test ===\n" << std::endl;

    ScavTrap st1("Scavy");
    st1.attack("boss");
    st1.takeDamage(25);
    st1.beRepaired(10);
    st1.guardGate();

    std::cout << "\n=== Frag Trap Test ===\n" << std::endl;

    FragTrap ft1("helly");
    ft1.attack("nook");
    ft1.takeDamage(30);
    ft1.beRepaired(10);
    ft1.highFivesGuys();

    std::cout << "\n=== Test Complete ===" << std::endl;
    return 0;
}
