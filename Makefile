# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bokim <bokim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/15 18:23:49 by bokim             #+#    #+#              #
#    Updated: 2021/10/15 18:27:56 by bokim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LFT = ./libft/libft.a

LIB = -L ./libft -lft

SRC_M_PATH = ./srcs/
SRC_B_PATH = ./bonus/
INC_M_PATH = ./includes/
INC_B_PATH = $(SRC_B_PATH)

SRC_M = push_swap.c
SRC_B = 
		
SRCS_M = $(addprefix $(SRC_M_PATH), $(SRC_M))
SRCS_B = $(addprefix $(SRC_B_PATH), $(SRC_B))

OBJS_M = $(SRCS_M:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

ifdef HAS_BONUS
		OBJS = $(OBJS_B)
		INC_PATH = $(INC_B_PATH)
else
		OBJS = $(OBJS_M)
		INC_PATH = $(INC_M_PATH)
endif

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_PATH)

bonus:
	@make HAS_BONUS=1 all

$(NAME): $(OBJS)
	@make -s -C libft
	@$(CC) $(CFLAGS) -o $@ $^ $(LIB)

clean:
	@make -s $@ -C libft
	@$(RM) $(OBJS_M) $(OBJS_B)
	@echo deleted all object files

fclean: clean
	@$(RM) $(NAME)
	@echo deleted libft and mlx

re: fclean all

.SILENT: $(OBJS)

.PHONY: all clean fclean re bonus