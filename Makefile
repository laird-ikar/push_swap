NAME	=	push_swap
BONUS	=	checker

LIBFT_DIR	=	libs/libft
SRCS_DIR	=	srcs
INCS_DIR	=	includes

FILES		=	\
	main		\
	error		\
	init		\
	normalize	\
	optimize	\
	parse		\
	sort
INC_FILES	=	\
	structures
FILES_BONUS	=
INC_FILES_BONUS	=

INCS		=	$(addprefix $(INCS_DIR)/, $(addsuffix .h, $(INC_FILES) $(FILES)))
SRCS		=	$(addprefix $(SRCS_DIR)/, $(addsuffix .c, $(FILES)))
OBJS		=	$(SRCS:.c=.o)
INCS_BONUS	=	$(addprefix $(INCS_DIR)/, $(addsuffix .h, $(INC_FILES_BONUS) $(FILES_BONUS)))
SRCS_BONUS	=	$(addprefix $(SRCS_DIR)/, $(addsuffix .c, $(FILES_BONUS)))
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

LIBFT		=	$(LIBFT_DIR)/libft.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

all: mandatory bonus

mandatory:	$(NAME)

bonus:		$(BONUS)

clean:
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean:	clean
	$(RM) $(NAME) $(BONUS)

re:	fclean all

$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $@

$(BONUS):	$(OBJS_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -L$(LIBFT_DIR) -lft -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

.PHONY:	all clean fclean re mandatory bonus
