# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 13:33:17 by startagl          #+#    #+#              #
#    Updated: 2024/01/12 13:43:43 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= 	c++
CFLAGS		= 	-Wall -Werror -Wextra -std=c++98
NAME		= 	Zombie
CPPFILES	= 	Zombie.cpp		\
				main.cpp		\
				newZombie.cpp	\
				randomChump.cpp	\

OFILES		=	$(CPPFILES:.cpp=.o)

all		:	$(NAME)

$(NAME) :	$(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o		:	%.cpp Zombie.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -rf $(OFILES)
	@echo  "❌ OBJS deleted."

fclean	: clean
	@rm -rf $(NAME)
	@echo  "❌ ALL deleted."

re		: fclean all

cl 		: all clean

.PHONY: clean fclean re all cl