
#include <stdio.h>


int show_alphabet(void) {
for (int i = 97; i <= 122; i++) {
printf("%c", i);
}

return 0;
}


int main(void) {
show_alphabet();
return 0;
}