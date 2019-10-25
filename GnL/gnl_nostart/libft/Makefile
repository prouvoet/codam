# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: prouvoet <prouvoet@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/21 17:09:23 by prouvoet       #+#    #+#                 #
#    Updated: 2019/06/04 13:58:40 by prouvoet      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
FILES = strlen strdup strcpy strcmp strncmp strncpy strcat strncat strlcat \
putchar putstr putnbr putchar_fd putstr_fd putnbr_fd putendl putendl_fd itoa \
atoi intlen isdigit isalpha isalnum isascii isprint strclr strchr strrchr \
memalloc memset bzero memdel strnew strdel strncpy memcpy memccpy strlcpy \
memchr memmove memcmp strstr strnstr toupper tolower isspace strequ strnequ \
strsub strjoin issspace strtrim strsplit striter striteri strmap strmapi \
lstnew lstdelone lstdel lstadd lstiter lstmap
SRCS = $(FILES:%=ft_%.c)
OSRCS = $(FILES:%=ft_%.o)
HEADER = libft.h

all: $(NAME)

$(NAME): $(OSRCS)
	@ar rc $(NAME) $(OSRCS)

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f *~ *.o

fclean: clean
	@rm -f *.a

re: fclean all