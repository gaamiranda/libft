NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -std=c99
SRC = ft_isalpha.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_memmove.c ft_strdup.c ft_strnstr.c ft_memset.c ft_strchr.c ft_calloc.c ft_bzero.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_strrchr.c ft_substr.c ft_strlcat.c ft_strtrim.c ft_split.c ft_strjoin.c ft_putchar_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re