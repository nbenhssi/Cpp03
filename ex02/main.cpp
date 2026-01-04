#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");

    clap1.attack("TargetA");
    clap2.takeDamage(5);
    clap2.beRepaired(3);

    ClapTrap clap3 = clap1;
    clap3.attack("TargetB");

    ClapTrap clap4;
    clap4 = clap2;
    clap4.attack("TargetC");

    return 0;
}