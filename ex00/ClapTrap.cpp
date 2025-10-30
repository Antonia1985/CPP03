#include "ClapTrap.hpp"
#include <string>
#include <iostream>

/*------------Constractors------------*/
ClapTrap::ClapTrap() : name("Unnamed"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& n) : name(n), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), 
                        energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{    
    std::cout << "Copy constructor called" << std::endl;
}

/*------------Assignment Operator------------*/
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if(this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "Copy assignment operator called" << std::endl;

    return(*this);
}

/*------------Getters------------*/
const std::string& ClapTrap::getName() const
{
    return name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return attackDamage;
}

/*------------Member Functions------------*/
void ClapTrap::attack(const std::string& target)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        this->energyPoints -= 1;

        std::cout << "ClapTrap " << this->name << " attacks " <<  target << ", causing " << attackDamage 
        << " points of damage!" << std::endl;
        std::cout << "--Hit points left: " << hitPoints << " --Energy points left: " << energyPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " can't attack. No energy or hit points left.." << std::endl;
        std::cout << "--Hit points left: " << hitPoints << " --Energy points left: " << energyPoints << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0 )
    {
        std::cout<< "ClapTrap " << this->name << " is already destroyed.." << std::endl;
        std::cout << "--Hit points left: " << hitPoints << " --Energy points left: " << energyPoints << std::endl;
        return;
    }
    if (amount >= hitPoints)
    {
        hitPoints = 0;
        std::cout << "ClapTrap " << this->name << " just got destroyed with " << amount << " attack damage!" << std::endl;
        std::cout <<"--Hit points left: 0" << " --Energy points left: " << energyPoints << std::endl;
    }
    else if ((amount < hitPoints))
    {
        this->hitPoints -= amount;
        std::cout << "ClapTrap " << this->name << " just got attacked with " << amount << " attack damage!"  << std::endl;
        std::cout << "--Hit points left: " << hitPoints << " --Energy points left: " << energyPoints << std::endl;
    }
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints > 0 && hitPoints > 0)
    {     
        this->energyPoints -= 1;
        this->hitPoints += amount;
    
        std::cout << "ClapTrap " << this->name << " repaired " << amount 
        << " hit points, lost 1 energy point!" << std::endl; 
        std::cout << "--Hit points left: " << hitPoints << " --Energy points left: " << energyPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " can't be repaired. No energy points or hit points left.. " << std::endl;
        std::cout << "--Hit points left: " << hitPoints << " --Energy points left: " << energyPoints << std::endl;
    }
}

/*------------Destructor------------*/
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for " << name << std::endl;
}
