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

ScavTrap &ScavTrap::operator=(const ScavTrap& scavtrap) {
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
    int energy_points = this->getEnergyPoints();
    int hit_points = this->getHitPoints();
    std::string name = this->getName();
    if (energy_points && hit_points) {
        setEnergyPoints(--energy_points);
        std::cout << "ScavTrap " << name << " attacks " << target
                  << ", causing " << this->getAttackDamage() << " points of damage! "
                  << "(energy left: " << energy_points << ")" << std::endl;
    } else {
        std::cout << "ScavTrap " << name << " is too weak to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName()
              << " is now in Gate Keeper mode." << std::endl;
}
