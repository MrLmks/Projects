#include <stdio.h>
#include <stdlib.h>


int get_length_num(int nb) {
    int length = 0;

    if (nb == 0) {
        return 1;
    }

    while (nb != 0) {
        nb /= 10;
        length += 1;
    }
    return length;
}

char* num_to_str(int nb) {
    int length = get_length_num(nb);
    char* str = malloc(sizeof(char) * (length + 1));
    int power = 1;
    int is_negative = 0;
    int i = 0;


    if (nb < 0) {
        is_negative = 1;
        nb = -nb;
    }
    for (int i = 0; i < length - 1; i++) {
        power *= 10;
    }
    if (is_negative) {
        str[i] = '-';
        i += 1;
    }
    for (int j = 0; j < length; j++) {
        int num = (nb / power) % 10;
        str[i] = num + '0';
        i += 1;
        power /= 10;
    }
    str[i] = '\0';
    return str;
}

int show_number(int nb) {
    char* num_str = num_to_str(nb);

    for (int i = 0; num_str[i] != '\0'; i++) {
        putchar(num_str[i]);
    }
    return 0;
}

int main(int argc, char** argv) {
    show_number(-5874);

    return 0;
}