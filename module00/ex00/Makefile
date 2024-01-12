# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 10:29:53 by startagl          #+#    #+#              #
#    Updated: 2023/05/22 10:49:28 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all		:			$(NAME)

$(NAME) :			$(OBJS)
							$(CXX) $(FLAGS) -o $(NAME) $(OBJS)
clean	:
							$(RM) $(OBJS)
fclean	:			clean
							$(RM) $(NAME)
re		:			fclean $%(NAME)

.PHONY	:			all clean fclean re
