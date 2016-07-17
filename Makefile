#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/15 04:48:39 by wzafati           #+#    #+#              #
#    Updated: 2016/07/17 00:07:11 by wzafati          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME			=	colle-1

HEADERS_DIR		=	./

SRCS			=	$(wildcard *.c)

OBJS			=	$(SRCS:.c=.o)

CFLAGS			=	-W -Wall -Werror -Wextra -pedantic -ansi

CC				=	cc

RM				=	@rm -f

EXEC			=	@./

CLEAN			=	@find . -name "*~" -delete -o -name "\#*\#" -delete

all				:
					@make $(NAME)

$(NAME)			:	$(OBJS)
					$(CC) -o $(NAME) $(OBJS)

$(OBJS)			:	%.o	:	%.c
					$(CC) $(CFLAGS) -I$(HEADERS_DIR) -c $(SRCS)

clean			:
					$(RM) $(OBJS)
					$(CLEAN)

fclean			:	clean
					$(RM) $(NAME)

re				:	fclean all

run				:	clean
					$(EXEC)$(NAME)
