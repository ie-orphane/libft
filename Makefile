NAME = libft.a
FILES := ft_*.c
OBJECTS := $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar -rs $(NAME) $(OBJECTS)

%.o : %.c
	cc -Wall -Wextra -Werror -c $< -o $@ -I $(NAME:.a=.h)

clean :
	rm -f $(OBJECTS)

fclean : clean 
	rm -f $(NAME)

re : fclean all
