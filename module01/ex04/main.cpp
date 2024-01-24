/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:22:54 by startagl          #+#    #+#             */
/*   Updated: 2024/01/24 18:15:38 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filename.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cerr << "\n\033[3;31merror:\nUsage: ./Sed <filename> <to_find> <replace>\n", 1);
	else if (!av[1][0] || !av[2][0] || !av[3][0])
		return (std::cerr << "\n\033[3;31merror: empty string\n", 1);
	Filename S(av[1]);
	S.replace(av[2], av[3]);
}
