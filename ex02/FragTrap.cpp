#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap-Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& n) : ClapTrap(n)
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap-Parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap-Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap : " << getName() << " requests 2 high-fives!" << std::endl;
    std::cout << "--Hit points left: " << getHitPoints() << " --Energy points left: " << getEnergyPoints() << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap-Destructor called for " << getName() << std::endl;
}