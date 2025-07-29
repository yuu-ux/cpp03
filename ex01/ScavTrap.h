#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"
class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& scavtrap);
        ScavTrap &operator=(const ScavTrap& scavtrap);
        ~ScavTrap();
        void guardGate();
    private:
        static const int kDefaultHitPoints = 100;
        static const int kDefaultEnergyPoints = 50;
        static const int kDefaultAttackDamage = 20;
};

#endif
