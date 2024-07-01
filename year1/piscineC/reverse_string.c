#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse_string(char *str) {
    int length = strlen(str);
    char *reversed_str = malloc(sizeof(char) * (length + 1));
    int i = 0;

    if (reversed_str == NULL)
        return NULL;
    
    for (int j = length - 1; str[i] != '\0' && str[j] != '\0'; i++, j--) {
        reversed_str[i] = str[j];
    }
    reversed_str[length] = '\0';
    return reversed_str;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Write a string to reverse after executing the binary !\n");
        return -1;
    }
    char *str = reverse_string(argv[1]);
    printf("Reversed String = %s\n", str);
    free(str);
    
    return 0;
}