#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amovchan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 19:31:33 by amovchan          #+#    #+#              #
#    Updated: 2017/06/06 17:25:22 by amovchan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME_P = push_swap
NAME_C = checker

G = gcc
FLAGS = -Wall -Wextra -Werror

SRC_PATH_P = ./push/
SRC_NAME_P =   main.c \
				ft_atoilong.c \
				ft_issort.c \
				ft_listoptim.c \
				ft_medianstek.c \
				ft_pushelem.c \
				ft_rotate_beck.c \
				ft_sortstek.c \
				ft_steckcpy.c \
				ft_structnb.c \
				ft_valid.c \
				instructions.c \
				optimiz.c \
				push_swap.c \
				quick_sort.c \
				quicksort2.c \
				sirtelementstekmin.c \
				sort3elem.c \
				sort3elem_b.c \
				sortelementstek.c \
				ft_liekclean.c \

OBJ_PATH_P = ./push/
OBJ_NAME_P = $(SRC_NAME_P:.c=.o)
SRC_P = $(addprefix $(SRC_PATH_P), $(SRC_NAME_P))
OBJ_P = $(addprefix $(OBJ_PATH_P), $(OBJ_NAME_P))
GCFLAGS_P = -I./push/ -I./libft/
SRC_PATH_C = ./check/
SRC_NAME_C =	main.c \
				ft_atoilong.c \
				ft_chek.c \
				ft_issort.c \
				ft_structnb.c \
				ft_valid.c \
				instructions.c \
				printstek.c \

OBJ_PATH_C = ./check/
OBJ_NAME_C = $(SRC_NAME_C:.c=.o)
SRC_C = $(addprefix $(SRC_PATH_C), $(SRC_NAME_C))
OBJ_C = $(addprefix $(OBJ_PATH_C), $(OBJ_NAME_C))
GCFLAGS_C = -I./check/ -I./libft/
LIBFT = libft/libft.a
all: $(NAME_P) $(NAME_C)
$(NAME_P): $(OBJ_P)
	@make -C libft/
	@$(G) $(FLAGS) $(GCFLAGS_P) -o $@ $(OBJ_P) $(LIBFT)

$(NAME_C): $(OBJ_C)
	@$(G) $(FLAGS) $(GCFLAGS_C) -o $@ $(OBJ_C) $(LIBFT)

$(OBJ_PATH_P)%.o: $(SRC_PATH_P)%.c
	@$(G) $(FLAGS) $(GCFLAGS_P) -o $@ -c $<

$(OBJ_PATH_C)%.o: $(SRC_PATH_C)%.c
	@$(G) $(FLAGS) $(GCFLAGS_C) -o $@ -c $<

%.o: %.c
	$(G) $(FLAGS) -c $< -o $@

clean:
	@make -C libft/ clean
	@rm -f $(OBJ_P)
	@rm -f $(OBJ_C)

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME_P) $(NAME_C)

re: fclean all
	@make -C libft/ re
