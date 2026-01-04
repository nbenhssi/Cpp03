#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1("ScavOne");
    ScavTrap scav2("ScavTwo");

    scav1.attack("TargetA");
    scav2.takeDamage(5);
    scav2.beRepaired(3);

    ScavTrap scav3 = scav1;
    scav3.attack("TargetB");

    ScavTrap scav4;
    scav4 = scav2;
    scav4.attack("TargetC");

    return 0;
}