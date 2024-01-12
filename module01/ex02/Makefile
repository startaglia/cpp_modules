# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 15:21:46 by startagl          #+#    #+#              #
#    Updated: 2024/01/12 15:27:43 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	 c++
CFLAGS		= 	-Wall -Werror -Wextra -std=c++98
NAME		=	 brain
CPPFILES	= 	main.cpp
OFILES		= 	$(CPPFILES:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	
clean		:
	@rm -rf $(OFILES)
	@echo "❌ OBJS deleted."

fclean		:	clean
	@rm -rf $(NAME)
	@echo "❌ ALL deleted."

re			:	fclean all

cl			:	all clean

.PHONY: clean fclean re all cl


