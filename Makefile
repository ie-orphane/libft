NAME = libft.a
FILES := ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c
OBJECTS := $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar -rs $(NAME) $(OBJECTS)

%.o : %.c
	cc -Wall -Wextra -Werror -c $^ -o $@

clean :
	rm -f $(OBJECTS)

fclean : clean 
	rm -f $(NAME)

re : fclean all
