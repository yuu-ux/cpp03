#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        explicit FragTrap(const std::string name);
        FragTrap(const FragTrap& fragtrap);
        FragTrap &operator=(const FragTrap& fragtrap);
        ~FragTrap();
        void highFivesGuys(void);
    private:
        static const int kDefaultHitPoints = 100;
        static const int kDefaultEnergyPoints = 100;
        static const int kDefaultAttackDamage = 30;
};

#endif
