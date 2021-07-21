# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 12:02:14 by smetzler          #+#    #+#              #
#    Updated: 2021/07/21 09:45:44 by smetzler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft
CFLAGS = -Werror -Wall -Wextra
OBJS := $(*.o)

SRC = *.c

SRC1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnst.c\
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
ft_lstmap


all: $(NAME)

${NAME}:
	${CC} ${CFLAGS} -c ${SRC}
	ar rc ${NAME} *.o

bonus:
	${CC} ${CFLAGS} -c ${BONUS}
	ar rc ${NAME} *.o

clean:
	rm-rf *.o
fclean: clean
	rm -f $(NAME)
re: clean ${NAME}