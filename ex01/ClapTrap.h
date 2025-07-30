#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& claptrap);
        explicit ClapTrap(const std::string& name, int hit_points = kDefaultHitPoints, int energy_points = kDefaultEnergyPoints, int attack_damage = kAttackDamage);
        ClapTrap &operator=(const ClapTrap& claptrap);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        // getter
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;

        // setter
        void setName(const std::string& name);
        void setHitPoints(int hit_points);
        void setEnergyPoints(int energy_points);
        void setAttackDamage(int attack_damage);

        static const int kDefaultHitPoints = 10;
        static const int kDefaultEnergyPoints = 10;
        static const int kAttackDamage = 0;

    private:
        std::string name_;
        int hit_points_;
        int energy_points_;
        int attack_damage_;
};

#endif
