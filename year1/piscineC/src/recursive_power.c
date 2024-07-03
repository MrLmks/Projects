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

int recursive_power(int nb, int p) {
    if (p == 0) {
        return 1;
    } if (isneg(p)) {
        return 0;
    }
    return nb * recursive_power(nb, p - 1);
}

int main(void) {
    int number = 0;
    int power = 0;

    printf("Enter a number : ");
    scanf("%d", &number);
    printf("Enter a power ");
    scanf("%d", &power);

    int result = recursive_power(number, power);
    printf("Result = %d\n", result);

    return 0;
}