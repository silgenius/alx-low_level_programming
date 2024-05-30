CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = main.c school.c
OBJ = $(SRC:.c=.o)
NAME = school
FLAG := $(CFLAGS)
compiler := $(CC)

.PHONY: $(NAME) clean oclean fclean re all
all: m.h $(NAME)

$(foreach file, $(SRC), $(eval $(file:.c=.o): $(file) ; compiler $(CFLAGS) -c -o $(file:.c=.o) $(file)))
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: oclean all
