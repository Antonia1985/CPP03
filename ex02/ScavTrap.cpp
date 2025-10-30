#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>


ScavTrap::ScavTrap() : ClapTrap()
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap-Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& n) : ClapTrap(n)
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap-Parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap-Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        setEnergyPoints(getEnergyPoints()-1);

        std::cout << "ScavTrap " << getName() << " attacks " <<  target << ", causing " << getAttackDamage() 
        << " points of damage!" << std::endl;
        std::cout << "--Hit points left: " << getHitPoints() << " --Energy points left: " << getEnergyPoints() << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << getName() << " can't attack. No energy or hit points left.." << std::endl;
        std::cout << "--Hit points left: " << getHitPoints() << " --Energy points left: " << getEnergyPoints() << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << getName() << " is now in Gate keeper mode" << std::endl;
    std::cout << "--Hit points left: " << getHitPoints() << " --Energy points left: " << getEnergyPoints() << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap-Destructor called for " << getName() << std::endl;
}