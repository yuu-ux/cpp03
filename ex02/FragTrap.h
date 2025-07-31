#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  explicit FragTrap(const std::string name);
  FragTrap(const FragTrap& fragtrap);
  FragTrap& operator=(const FragTrap& fragtrap);
  ~FragTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void highFivesGuys(void);
  static const int kDefaultHitPoints = 100;
  static const int kDefaultEnergyPoints = 100;
  static const int kDefaultAttackDamage = 30;
};

#endif
