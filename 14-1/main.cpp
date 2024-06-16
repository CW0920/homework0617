#include <iostream>
#include "administrator.h"

using namespace SavitchEmployees;
using namespace std;

int main()
{
    Administrator admin;
    admin.readAdministrator();
    admin.print();
    admin.printCheck();

    return 0;
}