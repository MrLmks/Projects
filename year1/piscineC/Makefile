NAME = libphoenix.a

SRC_DIR = ./src
INC_DIR = ./include

SRC = $(SRC_DIR)/is_prime_number.c	\
	$(SRC_DIR)/iterative_factorial.c	\
	$(SRC_DIR)/my_strcapitalize.c	\
	$(SRC_DIR)/my_strcpy.c	\
	$(SRC_DIR)/my_strncmp.c	\
	$(SRC_DIR)/my_strstr.c	\
	$(SRC_DIR)/my_strupcase.c	\
	$(SRC_DIR)/recursive_power.c	\
	$(SRC_DIR)/reverse_string.c	\
	$(SRC_DIR)/show_alphabet.c	\
	$(SRC_DIR)/show_combinations.c	\
	$(SRC_DIR)/show_number.c	\
	$(SRC_DIR)/show_string.c	\
	$(SRC_DIR)/to_number.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Werror -Wextra -Wall -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re