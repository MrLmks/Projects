#include <stdio.h>
#include <stdlib.h>

int show_string(char const *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}


int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Write a string in argument of the binary for the program to work ! \n");
        return -1;
    }
    for (int i = 1; i < argc; i++)
        show_string(argv[i]);

    return 0;
}