#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap() {
  std::cout << "FragTrap Default constructor called" << std::endl;
  setHitPoints(FragTrap::kDefaultHitPoints);
  setEnergyPoints(FragTrap::kDefaultEnergyPoints);
  setAttackDamage(FragTrap::kDefaultAttackDamage);
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, kDefaultHitPoints, kDefaultEnergyPoints, kDefaultAttackDamage) {
  std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap(fragtrap) {
  std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap) {
  if (this != &fragtrap) {
    ClapTrap::operator=(fragtrap);
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
  }
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap requests a high five!" << std::endl;
}
