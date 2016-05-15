# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-kadh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/15 14:57:28 by ael-kadh          #+#    #+#              #
#    Updated: 2016/05/15 15:11:20 by ael-kadh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_col = Colleen
NAME_grc = Grace
NAME_sul = Sully

SRC_col = Colleen.c
SRC_grc = Grace.c
SRC_sul = Sully.c

OBJ_col = $(SRC_col:.c=.o)
OBJ_grc = $(SRC_grc:.c=.o)
OBJ_sul = $(SRC_sul:.c=.o)

FLAGS = -g3 -Wall -Wextra -Werror

all: $(NAME_col) $(NAME_grc) $(NAME_sul)

$(NAME_col): $(OBJ_col)
	@cc $(OBJ_col) -o $(NAME_col)

$(NAME_grc): $(OBJ_grc)
	@cc $(OBJ_grc) -o $(NAME_grc)

$(NAME_sul): $(OBJ_sul)
	@cc $(OBJ_sul) -o $(NAME_sul)

%.o: %.c
	@cc $(FLAGS) -c $<

clean:
	@/bin/rm -f $(OBJ_col)
	@/bin/rm -f $(OBJ_grc)
	@/bin/rm -f $(OBJ_sul)

fclean: clean
	@/bin/rm -f $(NAME_col)
	@/bin/rm -f $(NAME_grc)
	@/bin/rm -f Grace_kid.c
	@/bin/rm -f $(NAME_sul)
	@/bin/rm -f Sully_[0-9].c

re: fclean all
