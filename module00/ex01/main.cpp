/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:50:57 by startagl          #+#    #+#             */
/*   Updated: 2023/06/06 15:34:02 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int main (void)
{
	phonebook rubrica;
	std:: string cmd;
	bool errorPrinted = false;
	while (cmd != "EXIT")
	{
		 if (!errorPrinted)
		 {
			std::cout << std::endl;
			std::cout << "\t" << ANSI_COLOR_GREEN << "ADD" << ANSI_COLOR_RESET;
			std::cout << "\t\t\t" << ANSI_COLOR_BLUE << "SEARCH" << ANSI_COLOR_RESET;
			std::cout << "\t\t\t" << ANSI_COLOR_RED << "EXIT" << ANSI_COLOR_RESET; 
			std::cout << std::endl;
		}
		getline(std::cin, cmd);
		if (std::cin.eof())
			break;
		if (cmd == "ADD")
		{
			rubrica.add();
			 errorPrinted = false;
		}
		else if (cmd == "SEARCH")
		{
			rubrica.search();
			errorPrinted = true;
			continue;
		}
		if (cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT" && cmd != "")
		{
			std::cout << "ERROR" << std::endl;
			errorPrinted = false;
		}
	}
}

