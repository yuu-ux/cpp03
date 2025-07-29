#include "ScavTrap.h"

int main() {
    ScavTrap a;
    ScavTrap b(a);
    ScavTrap c;

    c = a;

    c.setName("hoge");
    c.attack("fuga");
    c.takeDamage(5);
    c.beRepaired(3);
    c.guardGate();

    return 0;
}

