#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "\n=== ClapTrap Test ===\n" << std::endl;

    ClapTrap ct1("Clappy");
    ct1.attack("enemy1");
    ct1.takeDamage(5);
    ct1.beRepaired(3);
    ct1.takeDamage(10); // should bring HP to 0
    ct1.attack("enemy2"); // should fail due to 0 HP
    ct1.beRepaired(5); // should still work if EP > 0

    std::cout << "\n=== ScavTrap Test ===\n" << std::endl;

    ScavTrap st1("Scavy");
    st1.attack("boss");
    st1.takeDamage(25);
    st1.beRepaired(10);
    st1.guardGate(); // special behavior

    std::cout << "\n=== Test Complete ===" << std::endl;
    return 0;
}
