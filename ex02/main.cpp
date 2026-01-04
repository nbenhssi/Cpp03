#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag1("frag1");

    frag1.attack("TargetA");
    frag1.takeDamage(5);
    frag1.beRepaired(3);
    frag1.highFivesGuys();

    return 0;
}