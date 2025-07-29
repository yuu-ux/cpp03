#include "ClapTrap.h"

ClapTrap::ClapTrap()
    : name_(""),
      hit_points_(kDefaultHitPoints),
      energy_points_(kDefaultEnergyPoints),
      attack_damage_(kAttackDamage) {
    std::cout << "ClapTrap " << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, int hit_points = kDefaultHitPoints, int energy_points = kDefaultEnergyPoints, int attack_damage = kAttackDamage) // NOLINT
    : name_(name),
      hit_points_(hit_points),
      energy_points_(energy_points),
      attack_damage_(attack_damage) {}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
    : name_(claptrap.getName()),
      hit_points_(claptrap.getHitPoints()),
      energy_points_(claptrap.getEnergyPoints()),
      attack_damage_(claptrap.getAttackDamage()) {
    std::cout << "ClapTrap " << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& claptrap) {
    std::cout << "ClapTrap " << "Copy assignment operator called" << std::endl;
    if (this != &claptrap) {
        this->name_ = claptrap.getName();
        this->hit_points_ = claptrap.getHitPoints();
        this->energy_points_ = claptrap.getEnergyPoints();
        this->attack_damage_ = claptrap.getAttackDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energy_points_ && hit_points_) {
        energy_points_--;
        std::cout << "ClapTrap " << name_ << " attacks " << target
                  << ", causing " << attack_damage_ << " points of damage! "
                  << "(energy left: " << energy_points_ << ")" << std::endl;
    } else {
        std::cout << "ClapTrap " << name_ << " is too weak to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name_ << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energy_points_ && hit_points_) {
        energy_points_--;
        std::cout << "ClapTrap " << name_ << " is repaired for " << amount
                  << " points! (energy left: " << energy_points_ << ")" << std::endl;
    } else {
        std::cout << "ClapTrap " << name_ << " is too weak to repair itself!" << std::endl;
    }
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

