#include "FragTrap.h"

int main() {
    FragTrap a;
    FragTrap b(a);
    FragTrap c;

    c = a;

    c.setName("hoge");
    c.attack("fuga");
    c.takeDamage(5);
    c.beRepaired(3);
    c.highFivesGuys();

    return 0;
}

