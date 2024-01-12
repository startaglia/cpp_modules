/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:05:28 by startagl          #+#    #+#             */
/*   Updated: 2024/01/12 13:43:25 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definizione funct newZombie
# include "Zombie.hpp"

Zombie	*newZombie(std::string	name)
{
	// questa è la sintassi per l'allocazione dinamica, quindi sulla heap. L'allocazione dinamica necessita del free della mem. In cpp si fa con delete  
	return	new Zombie(name);
}