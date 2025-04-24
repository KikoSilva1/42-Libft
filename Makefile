# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: framiran <framiran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 17:18:03 by framiran          #+#    #+#              #
#    Updated: 2025/04/21 17:58:46 by framiran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRCS = ft_bzero.c ft_strlen.c ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isascii.c \
       ft_isdigit.c ft_isalnum.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
       ft_memmove.c ft_memset.c ft_strchr.c ft_strlcpy.c ft_calloc.c ft_strdup.c \
       ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_substr.c ft_strjoin.c  ft_split.c ft_strtrim.c\


OBJFILES = $(SRCS:.c=.o)

INCLUDES = includes
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rc $(NAME) $(OBJFILES)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
