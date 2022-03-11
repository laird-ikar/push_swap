# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 08:08:26 by bguyot            #+#    #+#              #
#    Updated: 2022/03/08 13:22:51 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

INCLUDE		= ./includes/
LIBFT		= ./libft/
SRC_DIR		= ./src/

SRC_FILES	= push_swap.c is_lstsorted.c is_lstsorted_r.c 

SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS		= $(SRCS:.c=.o)

CC			= gcc
CFLAG		= -Wall -Wextra -Werror
RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	$(CC) -Llibft -lft -c $(OBJS) -o $(NAME)

clean:
	$(MAKE) clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT)
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
