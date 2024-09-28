# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 19:40:29 by hurabe            #+#    #+#              #
#    Updated: 2024/09/28 19:43:20 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	push_swap
INCLUDE					=	-I src/include
CC						=   clang
CFLAGS					=	-Wall -Wextra -Werror
RM						=	rm -f
FOLDER					=	src
ITEM_FOLDER				=	src/items
LIBFT_FOLDER			=	src/libft
PUSH_SWAP_FOLDER		=	src/push_swap

TEST_FILE = \
tests/check_argv_test.c

FUNCTIONS				=	$(PUSH_SWAP_FOLDER)/check_argv.c $(PUSH_SWAP_FOLDER)/check_double.c $(PUSH_SWAP_FOLDER)/check_index.c $(PUSH_SWAP_FOLDER)/check_order.c $(PUSH_SWAP_FOLDER)/compression.c \
							$(PUSH_SWAP_FOLDER)/make_stack.c $(PUSH_SWAP_FOLDER)/node_hundling.c $(PUSH_SWAP_FOLDER)/push_swap.c $(PUSH_SWAP_FOLDER)/put_result.c $(PUSH_SWAP_FOLDER)/sort_start.c \
							$(PUSH_SWAP_FOLDER)/sort_start_3.c $(PUSH_SWAP_FOLDER)/sort_start_4.c $(PUSH_SWAP_FOLDER)/sort_start_5.c $(PUSH_SWAP_FOLDER)/sort_start_6_to_20.c $(PUSH_SWAP_FOLDER)/sort_start_x.c \
							$(ITEM_FOLDER)/command_p_s.c $(ITEM_FOLDER)/command_r.c $(ITEM_FOLDER)/command_rr.c $(LIBFT_FOLDER)/ft_atoi.c $(LIBFT_FOLDER)/ft_atol.c $(LIBFT_FOLDER)/ft_isdigit.c \
							$(LIBFT_FOLDER)/ft_isint.c $(LIBFT_FOLDER)/ft_issign.c $(LIBFT_FOLDER)/ft_isspace.c $(LIBFT_FOLDER)/ft_lstnew.c $(LIBFT_FOLDER)/ft_lstsize.c $(LIBFT_FOLDER)/ft_lstclear.c \
							$(LIBFT_FOLDER)/ft_lstadd_front.c $(LIBFT_FOLDER)/ft_lstadd_back.c $(LIBFT_FOLDER)/ft_putstr_fd.c $(LIBFT_FOLDER)/ft_split.c $(LIBFT_FOLDER)/ft_strcmp.c $(LIBFT_FOLDER)/ft_strlen.c

OBJ	= $(FUNCTIONS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

fsanitize:
	$(CC) $(CFLAGS) -g -fsanitize=address $(INCLUDE) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: clean all

test: $(OBJ)
	$(CC) $(CFLSGS) $(TEST_FILE)  $(OBJ)
.PHONY: all clean fclean re
