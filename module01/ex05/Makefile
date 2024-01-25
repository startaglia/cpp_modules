# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 10:39:01 by startagl          #+#    #+#              #
#    Updated: 2024/01/25 11:12:57 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC          =   c++
CFLAGS      =   -Wall -Werror -Wextra
NAME        =   harl
CPPFILES    =   main.cpp Harl.cpp
OFILES      =   $(CPPFILES:.cpp=.o)
HEADERS     =   Harl.hpp

all     :   $(NAME)

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

.PHONY: clean fclean re all
