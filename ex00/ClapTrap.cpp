#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default"), hit_point(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "ClapTrap default constructor called for " << Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    Name = clap.Name;
    this->Attack_damage = clap.Attack_damage;
    this->Energy_points = clap.Energy_points;
    this->hit_point = clap.hit_point;
    std::cout << "ClapTrap Copy constructor called for " << Name << std::endl;
        
}

ClapTrap::ClapTrap(const std::string& name) : Name(name), hit_point(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "ClapTrap constructor called for " << Name << std::endl;
}
ClapTrap::~ClapTrap()
{
        std::cout << "ClapTrap destructor called for " << Name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
        if (this != &clap)
        {
            Name = clap.Name;    
            this->Attack_damage = clap.Attack_damage;
            this->Energy_points = clap.Energy_points;
            this->hit_point = clap.hit_point;
        }
        std::cout << "ClapTrap Operator called for" << Name << std::endl;
        return *this;
}
void ClapTrap::attack(const std::string& target)
{
        if (this->Energy_points != 0 && this->hit_point > 0)
        {
                std::cout << "ClapTrap " << this->Name << " attacks " << target
                  << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
                this->Energy_points--;
        }
        else
            std::cout << "ClapTrap " << this->Name << " cannot attack!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_point == 0)
    {
        std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
        return;
    }
    if (amount >= this->hit_point)
        this->hit_point = 0;
    else
        this->hit_point -= amount;
    std::cout << "ClapTrap " << this->Name << " takes " << amount
              << " points of damage. HP left: " << this->hit_point << std::endl;
    if (this->hit_point == 0)
        std::cout << "ClapTrap " << this->Name << " is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
        if (this->Energy_points != 0 && this->hit_point > 0)
        {
            this->hit_point += amount;
            this->Energy_points--;
            std::cout << "ClapTrap " << this->Name << " is repaired by " << amount
                  << " points. HP now: " << this->hit_point << std::endl;
        }
        else
           std::cout << "ClapTrap " << this->Name << " cannot be repaired!" << std::endl;
}
