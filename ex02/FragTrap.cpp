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


void FragTrap::attack(const std::string& target) {
  if (energy_points_ && hit_points_) {
    --energy_points_;
    std::cout << "FragTrap " << name_ << " attacks " << target
              << ", causing " << attack_damage_ << " points of damage! "
              << "(energy left: " << energy_points_ << ")" << std::endl;
  } else {
    std::cout << "FragTrap " << name_ << " is too weak to attack!" << std::endl;
  }
}

void FragTrap::takeDamage(unsigned int amount) {
  if (hit_points_ <= 0) {
    std::cout << "Hit points are zero or below." << std::endl;
    return;
  }
  hit_points_ -= amount;
  if (hit_points_ < 0) {
    hit_points_ = 0;
  }
  std::cout << "FragTrap " << name_ << " takes " << amount << " points of damage! " << "(hit_points: " << hit_points_ << ")" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
  if (energy_points_ && hit_points_) {
    energy_points_--;
    hit_points_ += amount;
    std::cout << "FragTrap " << name_ << " is repaired for " << amount
              << " points! (energy left: " << energy_points_
              << ", hit points left: " << hit_points_ << ")" << std::endl;
  } else {
    std::cout << "FragTrap " << name_ << " is too weak to repair itself!" << std::endl;
  }
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap requests a high five!" << std::endl;
}
