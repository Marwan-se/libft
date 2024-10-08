# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 15:50:44 by msekhsou          #+#    #+#              #
#    Updated: 2022/11/03 11:15:52 by msekhsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c \
ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_strrchr.c ft_toupper.c\
ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c\
ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
OBJ = $(SRC:.c=.o)

B_SRS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
B_OBJ = $(B_SRS:.c=.o)

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<
		
$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

bonus: ${B_OBJ}
	ar rc $(NAME) ${B_OBJ}
clean:
		$(RM) $(OBJ) $(B_OBJ)
fclean: clean
		$(RM) $(NAME)

re: fclean all
