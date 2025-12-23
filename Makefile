# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anasinda <anasinda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/30 17:31:52 by anasinda          #+#    #+#              #
#    Updated: 2025/12/23 16:39:51 by anasinda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS =  -Wall -Wextra -Werror
NAME = libft.a
AR = ar rcs
RM = rm -f

SRC = src/ft_atoi.c src/ft_bzero.c src/ft_calloc.c src/ft_isalnum.c src/ft_isalpha.c \
	src/ft_isascii.c src/ft_isdigit.c src/ft_isprint.c src/ft_memchr.c src/ft_memcmp.c \
	src/ft_memcpy.c src/ft_memmove.c src/ft_memset.c src/ft_strchr.c src/ft_strdup.c \
	src/ft_strjoin.c src/ft_strlcat.c src/ft_strlcpy.c src/ft_strlen.c src/ft_strncmp.c \
	src/ft_strnstr.c src/ft_strrchr.c src/ft_substr.c src/ft_tolower.c src/ft_toupper.c \
	src/ft_putchar_fd.c src/ft_putstr_fd.c src/ft_putendl_fd.c src/ft_putnbr_fd.c \
	src/ft_strtrim.c src/ft_split.c src/ft_itoa.c src/ft_strmapi.c src/ft_striteri.c

SRC_BONUS= src_bonus/ft_lstnew_bonus.c src_bonus/ft_lstadd_front_bonus.c src_bonus/ft_lstsize_bonus.c \
		src_bonus/ft_lstlast_bonus.c src_bonus/ft_lstadd_back_bonus.c src_bonus/ft_lstdelone_bonus.c \
		src_bonus/ft_lstclear_bonus.c src_bonus/ft_lstiter_bonus.c src_bonus/ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

.SECONDARY: $(OBJ) $(OBJ_BONUS)
