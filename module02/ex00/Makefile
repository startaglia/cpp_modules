# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: startagl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 12:55:20 by startagl          #+#    #+#              #
#    Updated: 2024/01/25 12:55:54 by startagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC          =   c++
CFLAGS      =   -Wall -Werror -Wextra
NAME        =   a.out
CPPFILES    =   main.cpp Fixed.cpp
OFILES      =   $(CPPFILES:.cpp=.o)
HEADERS     =   Fixed.hpp

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
