# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 16:02:48 by startagl          #+#    #+#              #
#    Updated: 2024/01/24 18:16:21 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC          =       c++
CFLAGS      =       -Wall -Werror -Wextra -std=c++98
NAME        =       sed
CPPFILES    =       main.cpp filename.cpp
OFILES      =       $(CPPFILES:.cpp=.o)
HEADERS     =       filename.hpp


all         :   $(NAME)

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
