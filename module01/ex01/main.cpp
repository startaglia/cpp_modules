/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:55:47 by startagl          #+#    #+#             */
/*   Updated: 2024/01/12 15:00:19 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Zombie.hpp"
int main()
{
	Zombie * z = zombieHorde(5, "Remo");
	for (int i =0; i < 5; i++)
		z[i].announce();
	delete [] z;
	return 0;
}