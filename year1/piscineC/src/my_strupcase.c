#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>


char *my_strupcase(char *str) {
    char *stock = malloc(sizeof(char) * (strlen(str) + 1));
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            stock[i] = str[i] - ('a' - 'A');
        else 
            stock[i] = str[i];
    }
    stock[i] = '\0';

    return stock;
}

int main(void) {

    char *str = my_strupcase("HeLL9");

    printf("String in upper case : %s\n", str);

    return 0;
}