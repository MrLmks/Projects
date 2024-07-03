#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

int is_prime_number(int nb);
int iterative_factorial(int nb);
bool isneg(int nb);
char *cleanstr(char *str);
char *my_strcapitalize(char *str);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
int recursive_power(int nb, int p);
char* reverse_string(char *str);
int show_alphabet(void);
int get_length_num(int nb);
char* num_to_str(int nb);
int show_number(int nb);
int show_string(char const *str);
int to_number(char const *str);

#endif