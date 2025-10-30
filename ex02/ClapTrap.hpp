#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    protected:
        void setHitPoints(unsigned int hp);
        void setEnergyPoints(unsigned int ep);
        void setAttackDamage(unsigned int ad);

    public:
        explicit ClapTrap();
        explicit ClapTrap(const std::string& n);
        explicit ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);

        const std::string& getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;

        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        virtual ~ClapTrap();
};

#endif