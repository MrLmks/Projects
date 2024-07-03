#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>


bool isneg(int nb) { 
    if (nb < 0) {
        return true;
    }
    return false;
}

int iterative_factorial(int nb) {
    int i = 1;
    int result = 1;

    if (nb == 0 || isneg(nb)) {
        printf("Number can't be 0 nor negative ! \n");
        return - 1;
    }

    while (i <= nb) {
        result *= i;
        i++;
    }
    return result;
}

int main(void) {
    int factorial = iterative_factorial(20);
    printf("factorial = %d\n", factorial);
    
    return 0;
}