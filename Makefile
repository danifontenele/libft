# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 20:19:10 by calvares          #+#    #+#              #
#    Updated: 2025/10/26 21:02:39 by calvares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
PART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
#BONUS =
SRC = $(PART1) $(PART2)
OBJS =	$(SRC:.c=.o)
#OBJS_BONUS = $(BONUS:.c=.o)
CC = cc
CFLAGS = -Wextra -Wall -Werror

#archiving the object type files to main executable
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
#compiling from .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#archiving objects and bonus obj to create the program
bonus:

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re