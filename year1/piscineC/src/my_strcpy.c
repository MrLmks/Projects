#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>


char *my_strcpy(char *dest, char const *src) {
    char *save_dest = dest;
    int i = 0;

    for (; src[i] != '\0'; ) {
        save_dest[i] = src[i];
        i++;
    }
    save_dest[i] = '\0';
    
    return save_dest;
}

int main(void) { // testing with a random src 
    char *src = "Hello my friend and Welcome !";
    char *dest = malloc(sizeof(char) * (strlen(src) + 1));
    if (dest == NULL) {
        return 1;
    }
    char *str = my_strcpy(dest, src);
    printf("String = %s\n", str);

    free(dest);

    return 0;
}