NAME = libft
OBJ_FILES = main.o ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o \
ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_memcpy.o \
ft_memchr.o ft_memcmp.o ft_memccpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o \
ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strrchr.o \
ft_strdup.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o \
ft_strnstr.o ft_strchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o
BONUS_FILES = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o \
ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o
HEADER_FILES = libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) -o $@ $^

bonus: $(OBJ_FILES) $(BONUS_FILES)
	$(CC) -o $(NAME) $^

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re