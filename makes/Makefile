# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 10:04:54 by jvalenci          #+#    #+#              #
#    Updated: 2021/11/10 10:05:03 by jvalenci         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

DIR_SRCS	= srcs
DIR_OBJS	= objs
SUBDIRS		= libc_functions libc2_functions

SRCS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRCS)/, $(dir)))
OBJS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJS)/, $(dir)))
SRCS		= $(foreach dir, $(SRCS_DIRS), $(wildcard $(dir)/*.c))
OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

INCLUDES	= -I includes

CC		= gcc 
CFLAGS		= -Wall -Wextra -Werror
RM		= /bin/rm -f

$(DIR_OBJS)/%.o :	$(DIR_SRCS)/%.c
			@echo Creating object files
			@mkdir -p $(OBJS_DIRS)
			@$(CC) $(CFLAGS) $(INCLUDES) -c $^ -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@echo creating library
			@ar -rcs $(NAME) $(OBJS)
			@ranlib $(NAME)

clean:
			@echo Removing object files
			@$(RM) $(OBJS)
			@$(RM) -r $(DIR_OBJS)

fclean:		clean
			@echo Removing object files and executable
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
