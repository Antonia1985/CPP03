#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main()
{

    ScavTrap be("bebe");
    ScavTrap fr;
    fr = be;
    std::cout << std::endl;

    ScavTrap bou (be);
    bou.guardGate();
    std::cout << std::endl;
    std::cout << std::endl;

    ClapTrap cl("killer");  //hp-10 ep-10 ad-0
    
    cl.attack("bastard");   //hp-10 ep-9 ad-0
    std::cout << std::endl;
    cl.takeDamage(1);       //hp-9 ep-9 ad-0
    std::cout << std::endl; 
    cl.beRepaired(1);       //hp-10 ep-8 ad-0
    std::cout << std::endl;    
    cl.takeDamage(1);       //hp-9 ep-8 ad-0
    std::cout << std::endl;

    ScavTrap scv("robot");  //hp-100 ep-50 ad-20
    std::cout << std::endl;
    scv.attack("bastard");  //hp-100 ep-49 ad-20
    std::cout << std::endl;
    scv.takeDamage(5);      //hp-95 ep-49 ad-20
    std::cout << std::endl;
    scv.beRepaired(4);      //hp-99 ep-48 ad-20
    std::cout << std::endl;
    scv.guardGate();        //hp-99 ep-48 ad-20
    std::cout << std::endl;
    /*scv.takeDamage(99);      //hp-0 ep-48 ad-20
    std::cout << std::endl;
    scv.attack("bastard");  //hp-100 ep-48 ad-20
    std::cout << std::endl;
    scv.beRepaired(4);      //hp-99 ep-48 ad-20
    std::cout << std::endl;*/

    for (int i = 0; i < 48; i++)
    {
        scv.attack("bastard");
        std::cout << std::endl;
    }

    scv.guardGate();        //hp-99 ep-0 ad-20
    std::cout << std::endl;

    scv.beRepaired(4);      //hp-99 ep-0 ad-20 --No action
    std::cout << std::endl;

    scv.attack("bastard");  //hp-100 ep-48 ad-20 --No action
    std::cout << std::endl;
    
    return 0;
}