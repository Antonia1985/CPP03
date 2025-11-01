#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(const std::string& n);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);

    void attack(const std::string& target);
    void guardGate();

    virtual ~ScavTrap();
};

#endif