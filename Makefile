# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 21:57:44 by ookamonu          #+#    #+#              #
#    Updated: 2023/09/22 22:22:03 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME	= push_swap

SRCS	= push_swap.c \
	  ./src/do_pp.c \
	  ./src/do_rr.c \
	  ./src/do_rrr.c \
	  ./src/do_ss.c \
	  ./src/utils_1.c \
	  ./src/utils_2.c \
	  ./src/utils_3.c \
	  ./src/utils_for_sort.c \
	  ./sort/sort_max.c \
	  ./sort/sort_min.c \
	  ./sort/sort.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	@echo "$(NAME) Objects Successfully Cleaned"

fclean: clean
	$(RM) $(NAME)
	@echo "Successfully Cleaned"

re: fclean all

.PHONY: all clean fclean re
