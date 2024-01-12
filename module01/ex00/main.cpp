/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:28:28 by startagl          #+#    #+#             */
/*   Updated: 2024/01/12 13:56:27 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

// in questo ex è stato conveniente utilizzare l'allocazione sulla heap(dinamica) nella funzione newZombie perchè avevo bisogno di fare un'altra operazione(z->announce) dopo lo scope della funzione dove è stata istanziata la classe. Per la funzione randomChump invece è stata utile l'allocazione automatica(mem stack) perchè dentro la stessa funzione viene istanziata la classe e fatto anche la announce, quindi tutte le operazioni che doveva svolgere si eseguivano dentro la funzione stessa non uscendo dallo scope.
int main()
{
	Zombie *z = newZombie("Filippo");
	z->announce();
	delete(z);
	randomChump("Oliberto");
}