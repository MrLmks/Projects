#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>


bool is_neg_num(char const *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9')) {
            return true;
        }
    }
    return false;
}

int to_number(char const *str) {
    int num = 0;

    for (int i  = 0; str[i] != '\0'; i++) {
        if (num > (INT_MAX / 10) || (num == INT_MAX / 10 && (str[i] - '0' > INT_MAX % 10))) {
                printf("Max integer value exceeded, max value is %d/min value is %d !\n", INT_MAX, INT_MIN);
                num = 0;
                return -1;
            }
        if (str[i] >= '0' && str[i] <= '9') {
            num *= 10;
            num = num + str[i] - '0';
            if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                break;
        } else
            continue;
    }
    if (is_neg_num(str))
        num = -num;

    printf("Num returned = %d\n", num);
    return num;
}


int main(int argc, char** argv) {
    if (argc < 2) {
        return -1;
    }
    to_number(argv[1]);
    
    return 0;
}