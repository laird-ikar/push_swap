# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 17:29:03 by bguyot            #+#    #+#              #
#    Updated: 2022/03/14 08:29:22 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap
BONUS			= checker

INCLUDE			= ./includes/
LIBFT			= ./libft/
SRC_DIR			= ./src/
SRC_BONUS_DIR	= ./src_bonus/

SRC_FILES	= push_swap.c ft_pa.c ft_pb.c ft_ra.c ft_rb.c ft_rr.c ft_sa.c		\
ft_sb.c ft_ss.c push_swap_utils.c trysort.c trysortparttwo.c last_file.c		\
second_last_file.c
SRC_BONUS_FILES	= ft_pa.c ft_pb.c ft_ra.c ft_rb.c ft_rr.c ft_sa.c ft_sb.c 		\
ft_ss.c checker.c the_file.c checker_utils.c

SRCS			= $(addprefix $(SRC_DIR),$(SRC_FILES))
OBJS			= $(SRCS:.c=.o)
SRCS_BONUS		= $(addprefix $(SRC_BONUS_DIR),$(SRC_BONUS_FILES))
OBJS_BONUS		= $(SRCS_BONUS:.c=.o)

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) -Llibft -lft $(OBJS)

bonus: $(BONUS)

$(BONUS): $(OBJS_BONUS)
	$(MAKE) -C $(LIBFT)
	$(CC) $(CFLAGS) -o $(BONUS) -Llibft -lft $(OBJS_BONUS)

clean:
	$(MAKE) clean -C $(LIBFT)
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT)
	$(RM) $(NAME) $(BONUS)

re:	fclean all

.PHONY:	all clean fclean re
