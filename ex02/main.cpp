#include "FragTrap.h"

int main() {
  FragTrap player("player");

  std::cout << "[Test 1: Basic attack with energy and HP]" << std::endl;
  player.attack("enemy");

  std::cout << std::endl;

  std::cout << "[Test 2: Taking damage while alive]" << std::endl;
  player.takeDamage(5);

  std::cout << std::endl;

  std::cout << "[Test 3: Repairing while alive and with energy]" << std::endl;
  player.beRepaired(5);

  std::cout << std::endl;

  std::cout << "[Test 4: Attacking until energy is depleted]" << std::endl;
  int remainEnergy = FragTrap::kDefaultEnergyPoints;
  while (remainEnergy--) {
    player.attack("enemy");
  }

  std::cout << std::endl;

  std::cout << "[Test 5: Attempting to repair with no energy]" << std::endl;
  player.beRepaired(1);

  std::cout << std::endl;

  player.highFivesGuys();

  std::cout << std::endl;
  return 0;
}
