#include "ScavTrap.h"
#include "ClapTrap.h"

ScavTrap::ScavTrap() : ClapTrap(ScavTrap::kDefaultHitPoints, kDefaultEnergyPoints, kDefaultAttackDamage) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
    : hit_points_(claptrap.getHitPoints()),
      energy_points_(claptrap.getEnergyPoints()),
      attack_damage_(claptrap.getAttackDamage()) {
    std::cout << "Copy constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap) {
    std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& scavtrap) {
    if (this != &scavtrap) {
        ClapTrap::operator=(scavtrap);
        std::cout << "Copy assignment operator called" << std::endl;
    }
    return *this;
}
ScavTrap::~ScavTrap() {
  std::cout << "Destructor called" << std::endl;
}
