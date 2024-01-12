# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 15:43:13 by startagl          #+#    #+#              #
#    Updated: 2024/01/12 15:47:05 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
NAME		=	violence
CPPFILES	=	Weapon.cpp			\
				main.cpp			\
				HumanA.cpp			\
				HumanB.cpp			\

OFILES		=	$(CPPFILES:.cpp=.o)
HEADERS		= 	HumanA.hpp HumanB.hpp Weapon.hpp

all			:	$(NAME)

$(NAME)		:	$(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o			:	%.cpp  $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@

clean		:
	@rm -rf $(OFILES)
	@echo  "❌ OBJS deleted."

fclean		: 	clean
	@rm -rf $(NAME)
	@echo  "❌ ALL deleted."

re		: fclean all

cl 		: all clean

.PHONY: clean fclean re all cl