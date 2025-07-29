#include "ClapTrap.h"

int main() {
    ClapTrap a;
    ClapTrap b(a);
    ClapTrap c;

    c = a;

    c.setName("hoge");
    c.attack("fuga");
    c.takeDamage(5);
    c.beRepaired(3);

    return 0;
}
