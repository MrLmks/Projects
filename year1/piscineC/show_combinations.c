#include <stdio.h>


int show_combinations(void) {
    int first = 1;

    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 8; j++) {
            for (int k = j + 1; k <= 9; k++) {
                if (!first) {
                    printf(", ");
                }
                printf("%c%c%c", i + '0', j + '0', k + '0');
                first = 0;
            }
        }
    }
    printf("\n");
    return 0;
}

int main(void) {
    show_combinations();
    return 0;
}