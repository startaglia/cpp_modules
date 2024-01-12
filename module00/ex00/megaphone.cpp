/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:42:33 by startagl          #+#    #+#             */
/*   Updated: 2023/05/22 11:38:45 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

std::string toUpperCase(const std::string& str)
{
	std::string rst;
	for (char c : str)
		rst += toupper(c);
	return rst;
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	for(int i = 1; i < ac; i++)
			std::cout << toUpperCase(av[i]) << " ";
		std::cout << std::endl;
	return 0;
}