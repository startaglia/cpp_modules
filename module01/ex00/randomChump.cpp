/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:09:40 by startagl          #+#    #+#             */
/*   Updated: 2024/01/12 12:41:44 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// definizione funct randomChump
# include "Zombie.hpp"

void	randomChump(std::string name)
{
	// questa è la sintassi per l'allocazione automatica, quindi sulla stack. In cpp l'allocazione automatica libera automaticamente la mem sulla stack quando esce dallo scope della funct
	Zombie z(name);
	z.announce();
}