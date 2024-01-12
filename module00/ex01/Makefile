# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 11:47:18 by startagl          #+#    #+#              #
#    Updated: 2023/05/22 15:12:52 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	phonebook

SRCS =	phonebook.cpp main.cpp contact.cpp
OBJS =	$(SRCS:.cpp=.o)

CXX =	c++
FLAGS = -Wall -Wextra -Werror -std=c++98

RM =	rm -f

all		:			$(NAME)

$(NAME): 			$(OBJS)
							$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean	:
							$(RM) $(OBJS)
fclean	:			clean
							$(RM) $(NAME)
re		:			fclean all

.PHONY	:			all clean fclean re