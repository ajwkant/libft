# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: akant <akant@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/05 20:13:28 by akant         #+#    #+#                  #
#    Updated: 2020/11/09 21:03:17 by alexanderka   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memcpy.c \
ft_memchr.c ft_memcmp.c ft_memccpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strrchr.c \
ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
ft_strnstr.c ft_strchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

HEADER_FILES = libft.h

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
OBJS_W = $(SRCS:.c=.o) $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

bonus: $(OBJS) $(OBJS_W)
	ar -rcs $(NAME) $^

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_W)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re