# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 13:08:39 by hurabe            #+#    #+#              #
#    Updated: 2024/09/27 21:18:39 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c ft_atol.c ft_isdigit.c ft_isint.c ft_issign.c ft_isspace.c \
			ft_putstr_fd ft_split.c ft_strcmp.c ft_strlen.c
			
SRCS_BONUS	=	ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c

OBJS	= $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# INCS	= -I includes
NAME	= libft.a
CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

ifeq ($(BONUS_FLAG),yes)
	SOURCES = $(BASIC_SRCS) $(BONUS_SRCS)
else
	SOURCES = $(BASIC_SRCS)
endif

# %.o:%.c
# 	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
	touch bonus
	ar rcs $(NAME) $(OBJS_BONUS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS) bonus

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY:	all clean fclean re