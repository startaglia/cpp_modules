# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 22:57:18 by startagl          #+#    #+#              #
#    Updated: 2023/06/15 23:10:01 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRCS = Account.cpp tests.cpp
OBJS = 	$(SRCS:.cpp=.o)

CXX = c++
FLAGS = -Wall -Werror -Werror -std=c++98

RM = rm -rf

all 	:	$(NAME)

$(NAME) :	$(OBJS)
			@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean 	:	
			$(RM) $(OBJS)
fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
