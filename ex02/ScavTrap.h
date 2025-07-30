#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"
class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        explicit ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& scavtrap);
        ScavTrap &operator=(const ScavTrap& scavtrap);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
		static const int kDefaultHitPoints = 100;
		static const int kDefaultEnergyPoints = 50;
		static const int kDefaultAttackDamage = 20;
};

#endif

