/** lab14-02.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include "lab14functs.h"

int main() {
    int change;
    int quarter;
    int dime;
    int nickel;
    int penny;
    printf("Enter change value as an int\n");
    scanf("%d", &change);
    makeChange(change, &quarter, &dime, &nickel, &penny);
    printf("quarters: %d, dimes: %d, nickels: %d, pennies: %d\n", quarter, dime, nickel, penny);
    return 0;
    
}


