#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(const std::string& n);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);

    void highFivesGuys(void);
    
    virtual ~FragTrap();
};

#endif