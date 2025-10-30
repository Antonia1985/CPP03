#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int main()
{
    ClapTrap ha("killer");
    ClapTrap la("lady");
    ha = la;
    
    ClapTrap cl("killer");  //hp-10 ep-10 ad-0
    
    cl.attack("bastard");   //hp-10 ep-9 ad-0
    std::cout << std::endl;
    cl.takeDamage(1);       //hp-9 ep-9 ad-0
    std::cout << std::endl; 
    cl.beRepaired(1);       //hp-10 ep-8 ad-0
    std::cout << std::endl;    
    cl.takeDamage(1);       //hp-9 ep-8 ad-0
    std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        cl.attack("bastard");
        std::cout << std::endl;
    }

    cl.beRepaired(4);      //hp-9 ep-0 ad-0 --No action
    std::cout << std::endl;

    cl.attack("bastard");  //hp-9 ep-0 ad-0 --No action
    std::cout << std::endl;
    return 0;
}