# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/11 15:20:54 by donchoi           #+#    #+#              #
#    Updated: 2022/06/11 15:20:54 by donchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FILES = push_swap \
		command_p \
		command_r \
		command_rr \
		command_s \
		util \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

all: $(NAME)

.c.o: $(SRCS)
	make -C ./libft all
	make -C ./libft bonus
	$(CC) $(CFLAGS) -c -o $@ $<
	cp ./libft/libft.a ./

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $< libft.a

clean:
	$(RM) $(OBJS)
	cd ./libft && make clean

fclean: clean
	$(RM) $(NAME) libft.a
	cd ./libft && make fclean

re: fclean all

.PHONY: all clean fclean re