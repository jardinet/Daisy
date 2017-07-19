# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwragg <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 21:06:17 by mwragg            #+#    #+#              #
#    Updated: 2016/11/16 06:22:03 by mwragg           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ft_display_file

SRC=	ft_putchar.c \
		ft_putstr.c \
		ft_display_file.c

OBJ= $(SRC:.c=.o)

INCLUDES= -I ft_display_file.h

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ)

%.o: %.c
	@gcc -o $@ -c $< $(FLAGS) $(INCLUDES)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
