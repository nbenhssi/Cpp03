#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    Name = "Default";
    hit_point = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "FragTrap default constructor called for " << Name << std::endl;
}
FragTrap::FragTrap(const std::string& name)
{
    Name = name;
    hit_point = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "FragTrap constructor called for " << Name << std::endl;
}
FragTrap::FragTrap(const FragTrap &frag)  : ClapTrap(frag) 
{
    Name = frag.Name;
    this->Attack_damage = frag.Attack_damage;
    this->Energy_points = frag.Energy_points;
    this->hit_point = frag.hit_point;
    std::cout << "FragTrap Copy constructor called for " << Name << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << Name << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& frag)
{
    if (this != &frag)
    {
        ClapTrap::operator=(frag);
    }
    std::cout << "FragTrap Operator called for " << Name << std::endl;
    return *this;
}
void FragTrap::highFivesGuys(void)
{
    if (hit_point > 0)
        std::cout << "FragTrap " << Name << " requests a high five" << std::endl;
    else
        std::cout << "FragTrap " << Name << " is dead and cannot high five" << std::endl;
}

