#include <iostream>
#include "Human.h"
#include "Elf.h"
#include "Cyberdemon.h"
#include "Balrog.h"
using namespace std;
int main()
{
    srand((time(NULL)));

    Human h(20, 30);
    Elf e(15, 25);
    Cyberdemon c(25, 35);
    Balrog b(30, 40);

    cout << "Testing Human:" << endl;
    h.getDamage();

    cout << "\nTesting Elf:" << endl;
    e.getDamage();

    cout << "\nTesting Cyberdemon:" << endl;
    c.getDamage();

    cout << "\nTesting Balrog:" << endl;
    b.getDamage();

    return 0;
}