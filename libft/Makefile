# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgarse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 15:07:03 by lgarse            #+#    #+#              #
#    Updated: 2020/02/15 21:28:32 by lgarse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
HEAD=libft.h ft_list.h
SRCS=ft_atoi.c ft_lstdel.c ft_memcpy.c ft_putnbr_fd.c ft_strdup.c \
	ft_strncat.c ft_strsub.c ft_bzero.c ft_lstdelone.c ft_memdel.c \
	ft_putstr.c ft_strequ.c ft_strncmp.c ft_isalnum.c ft_strtrim.c \
	ft_lstiter.c ft_memmove.c ft_putstr_fd.c ft_striter.c ft_strncpy.c \
	ft_tolower.c ft_isalpha.c ft_lstmap.c ft_memset.c ft_strcat.c \
	ft_striteri.c ft_strnequ.c ft_toupper.c ft_isascii.c ft_lstnew.c \
	ft_putchar.c ft_strchr.c ft_strjoin.c ft_strnew.c ft_isdigit.c \
	ft_memalloc.c ft_putchar_fd.c ft_strclr.c ft_strlcat.c ft_strnstr.c \
	ft_isprint.c ft_memccpy.c ft_putendl.c ft_strcmp.c ft_strlen.c \
	ft_strrchr.c ft_itoa.c ft_memchr.c ft_putendl_fd.c ft_strcpy.c \
	ft_strmap.c ft_strsplit.c ft_lstadd.c ft_memcmp.c ft_putnbr.c \
	ft_strdel.c ft_strmapi.c ft_strstr.c ft_diglength.c ft_isalpha.c\
	ft_labs.c ft_abs.c ft_min.c ft_max.c ft_swap.c ft_count.c\
	ft_delim_count.c ft_find_words.c ft_count_words.c get_next_line.c\
	write_e.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
