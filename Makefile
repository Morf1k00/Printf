# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 14:44:10 by rkrechun          #+#    #+#              #
#    Updated: 2023/12/05 12:56:17 by rkrechun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putxlower.c	\
		ft_putxupper.c	\
		ft_putunsignednbr.c \
		
OBJS	= $(SRCS:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o:
	$(CC) $(FLAGS) -c $< -o $@ -I$(INCS)

$(NAME): $(OBJS)
		$(LIBC) $(NAME) $(OBJS)
		
all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re:	fclean all

.PHONY: all bonus clean fclean re .c.o