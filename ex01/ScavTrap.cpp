#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    Name = "Default";
    hit_point = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap default constructor called for " << Name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
    Name = name;
    hit_point = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap Copy constructor called for " << Name << std::endl;

}
ScavTrap::ScavTrap(const ScavTrap &Scav) : ClapTrap(Scav) 
{
    Name = Scav.Name;
    this->Attack_damage = Scav.Attack_damage;
    this->Energy_points = Scav.Energy_points;
    this->hit_point = Scav.hit_point;
    std::cout << "ScavTrap Copy constructor called for " << Name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
        if (this != &scav)
        {
          ClapTrap::operator=(scav);
        }
        std::cout << "ScavTrap Operator called for" << Name << std::endl;
        return *this;
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap destructor called for " << Name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
        if (this->Energy_points != 0 && this->hit_point > 0)
        {
                std::cout << "ScavTrap " << this->Name << " attacks " << target
                  << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
                this->Energy_points--;
        }
        else
            std::cout << "ScavTrap " << this->Name << " cannot attack!" << std::endl;
}

