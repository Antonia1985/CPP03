#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <string>
#include <iostream>

int main()
{
    FragTrap be("bebe");
    FragTrap sr;
    sr = be;   
    std::cout << std::endl;

    FragTrap bou (be);
    bou.highFivesGuys();
    std::cout << std::endl;
    
    FragTrap fr("frogy");
    fr.attack("snake");     //hp=100 ep=99 
    std::cout << std::endl;
    fr.takeDamage(50);      //hp=50 ep=99
    std::cout << std::endl;
    fr.beRepaired(1);       //hp=51 ep=98
    std::cout << std::endl;
    fr.highFivesGuys();     //hp=51 ep=98
    std::cout << std::endl;

   return 0;
}