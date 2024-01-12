/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:39:25 by startagl          #+#    #+#             */
/*   Updated: 2024/01/12 15:12:28 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	// creo l'horda di zombie tutti insieme
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		// ad ogni zombie assegno il nome passato come param.
		z[i].setName(name);
	}
	// mi ritorno l'horda di zombies. Di default torna il puntatore al primo
	return z;
}