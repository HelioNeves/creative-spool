#include <stdio.h>
#include <stdlib.h>
#include "user.h"
#include "printer.h"

User userA;
User userB;
User userC;

Printer printerUFCSPA;
void init(){
    printerUFCSPA.print = printing;
}


int main()
{
    init();

    populateIt('A', userA.buffer);
    populateIt('B', userB.buffer);
    populateIt('C', userC.buffer);

    printerUFCSPA.id = 1;
    printerUFCSPA.busy = true;
    printerUFCSPA.print(userC.buffer);

    return 0;
}
