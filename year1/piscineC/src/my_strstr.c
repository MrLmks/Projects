#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>


char *my_strstr(char *str, char const *to_find) {
    int str_length = strlen(str);
    int tofind_length = strlen(to_find);

    if (tofind_length > str_length)
        return NULL;

    for (int i = 0; i <= str_length - tofind_length; i++) {
        int j = 0;
        for (; j < tofind_length; j++) {
            if (str[i + j] != to_find[j])
                break;
        }
        if (j == tofind_length) {
            return &str[i];
        }
    }
    return NULL;
}

int main(void) {
    char *str = "X dog give it to you";
    char const *to_find = "toyou";
    char *res = my_strstr(str, to_find);

    printf("result = %s\n", res);

    return 0;
}