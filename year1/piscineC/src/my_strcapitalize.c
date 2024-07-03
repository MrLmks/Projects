#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>

char *cleanstr(char *str) {
    char *clean = malloc(sizeof(char) * (strlen(str) + 1));
    int i = 0;
    int j = 0;

    while (str[i] == ' ' && str[i] != '\0') {
        i++;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ')
            continue;
        clean[j++] = str[i];
    }
    clean[j] = '\0';

    return clean;
}


char *my_strcapitalize(char *str) {
    char *cleaned_str = cleanstr(str);
    char *stock = malloc(sizeof(char) * (strlen(cleaned_str) + 1));
    int i = 0;

    for (; cleaned_str[i] != '\0'; i++) {
        if ((i == 0 && cleaned_str[i] >= 'a' && cleaned_str[i] <= 'z') || (i > 0 && cleaned_str[i - 1] == ' ' &&  cleaned_str[i] >= 'a' && cleaned_str[i] <= 'z')) {
            stock[i] = cleaned_str[i] - ('a' - 'A');
        } else {
            stock[i] = cleaned_str[i];
        }
    }
    stock[i] = '\0';

    return stock;
}

int main(void) {
    char *str = my_strcapitalize("I am JsUT on my TA       ng ye ? ?");

    printf("Capitalized string = %s\n", str);

    return 0;
}