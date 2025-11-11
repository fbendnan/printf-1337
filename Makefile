# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 21:25:18 by fbendnan          #+#    #+#              #
#    Updated: 2025/11/11 21:25:19 by fbendnan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

CC = cc

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_helpers.c ft_putchar.c ft_putnbr.c ft_putstr.c\
ft_printf.c ft_puthex.c ft_putptr.c ft_putu.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c 
	$(CC) -c $(CFLAGS) $< -o $@ 

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re