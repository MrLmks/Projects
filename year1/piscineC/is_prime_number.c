#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int is_prime_number(int nb) {
    if (nb <= 1)
        return 0;
    if (nb == 2)
        return 1;
    if (nb % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= nb; i += 2) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char **argv) {

    int num = is_prime_number(9);
    printf("%d\n", num);

    return 0;
}