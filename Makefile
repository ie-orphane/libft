NAME = libft.a
FILES := ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_bzero.c ft_memchr.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
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
