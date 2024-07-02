#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>


int my_strncmp(char const *s1, char const *s2, int n) {
    int i = 0;

    for (; (s1[i] != '\0' && s2[i] != '\0') && i < n; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    if (i < n)
        return s1[i] - s2[i];
    
    return 0;
}

int main(int argc, char **argv) {
    char const *s1 = "He";
    char const *s2 = "Hella";

    int result = my_strncmp(s1, s2, 3);

    printf("result = %d\n", result);

    return 0;
}