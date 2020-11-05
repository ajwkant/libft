# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ivork <ivork@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/05 12:53:39 by ivork         #+#    #+#                  #
#    Updated: 2020/11/05 20:39:37 by akant         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memcpy.c \
ft_memchr.c ft_memcmp.c ft_memccpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strrchr.c \
ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
ft_strnstr.c ft_strchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJS	=	$(SRCS:.c=.o)
LIBC	=	ar -rcs
RM		=	rm -f
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra
INCS	=	.
all:		$(NAME)
$(NAME):	$(OBJS)
			${LIBC} $(NAME) $(OBJS)
.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}
clean:
			${RM} $(OBJS)
fclean:		clean
			${RM} $(NAME)
re:			fclean all
.PHONY:		all .c.o clean fclean re