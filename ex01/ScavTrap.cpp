#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "ScavTrap Default constructor called" << std::endl;
  setHitPoints(ScavTrap::kDefaultHitPoints);
  setEnergyPoints(ScavTrap::kDefaultEnergyPoints);
  setAttackDamage(ScavTrap::kDefaultAttackDamage);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, kDefaultHitPoints, kDefaultEnergyPoints, kDefaultAttackDamage) {
  std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap) {
  std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap) {
  std::cout << "ScavTrap Copy assignment operator called" << std::endl;
  if (this != &scavtrap) {
    ClapTrap::operator=(scavtrap);
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (energy_points_ && hit_points_) {
    --energy_points_;
    std::cout << "ScavTrap " << name_ << " attacks " << target
              << ", causing " << attack_damage_ << " points of damage! "
              << "(energy left: " << energy_points_ << ")" << std::endl;
  } else {
    std::cout << "ScavTrap " << name_ << " is too weak to attack!" << std::endl;
  }
}

void ScavTrap::takeDamage(unsigned int amount) {
  if (hit_points_ <= 0) {
    std::cout << "Hit points are zero or below." << std::endl;
    return;
  }
  hit_points_ -= amount;
  if (hit_points_ < 0) {
    hit_points_ = 0;
  }
  std::cout << "ScavTrap " << name_ << " takes " << amount << " points of damage! " << "(hit_points: " << hit_points_ << ")" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
  if (energy_points_ && hit_points_) {
    energy_points_--;
    hit_points_ += amount;
    std::cout << "ScavTrap " << name_ << " is repaired for " << amount
              << " points! (energy left: " << energy_points_
              << ", hit points left: " << hit_points_ << ")" << std::endl;
  } else {
    std::cout << "ScavTrap " << name_ << " is too weak to repair itself!" << std::endl;
  }
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << this->getName()
            << " is now in Gate Keeper mode." << std::endl;
}
