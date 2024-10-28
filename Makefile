NAME = libft.a

FUNCTIONS := toupper tolower isalpha isdigit isalnum isascii isprint \
		strlen strchr strrchr strlcpy strlcat strncmp strnstr strdup \
		memset memcmp memcpy memmove memchr bzero calloc atoi \
		substr strjoin strtrim strmapi striteri split itoa \
		putchar_fd putstr_fd putendl_fd putnbr_fd

SOURCES := $(shell printf "ft_%s.c\n" ${FUNCTIONS})

OBJECTS := $(SOURCES:.c=.o)

FUNCTIONS_BONUS := new add_front size add_back

SOURCES_BONUS := $(shell printf "ft_lst%s_bonus.c\n" ${FUNCTIONS_BONUS})

OBJECTS_BONUS := $(SOURCES_BONUS:.c=.o) 

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar -rs $(NAME) $(OBJECTS)

bonus : $(OBJECTS_BONUS)
	ar -rs $(NAME) $(OBJECTS_BONUS)

%.o : %.c
	cc -Wall -Wextra -Werror -c $^ -o $@

clean :
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean : clean 
	rm -f $(NAME)

re : fclean all
