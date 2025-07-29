#include "ClapTrap.h"

ClapTrap::ClapTrap() : hit_points_(kDefaultHitPoints), energy_points_(kDefaultEnergyPoints), attack_damage_(kAttackDamage) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
    : hit_points_(claptrap.getHitPoints()),
      energy_points_(claptrap.getEnergyPoints()),
      attack_damage_(claptrap.getAttackDamage()) {
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& claptrap) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &claptrap) {
        this->hit_points_ = claptrap.getHitPoints();
        this->energy_points_ = claptrap.getEnergyPoints();
        this->attack_damage_ = claptrap.getAttackDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap" << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap" << name_ << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap" << name_ << " is repaired for " << amount << " points!" << std::endl;

}

std::string ClapTrap::getName() const {
    return name_;
}

int ClapTrap::getHitPoints() const {
    return hit_points_;
}

int ClapTrap::getEnergyPoints() const {
    return energy_points_;
}

int ClapTrap::getAttackDamage() const {
    return attack_damage_;
}

void ClapTrap::setName(const std::string& name) {
    name_ = name;
}

void ClapTrap::setHitPoints(int hit_points) {
    hit_points_ = hit_points;
}

void ClapTrap::setEnergyPoints(int energy_points) {
    energy_points_ = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage) {
    attack_damage_ = attack_damage;
}

