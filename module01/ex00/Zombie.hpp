/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:10:14 by startagl          #+#    #+#             */
/*   Updated: 2024/01/12 13:29:52 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nel file.hpp vanne messe le dichiarazioni(firme) delle funzioni e delle classi
#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;
	
	public:
	// è uso dichiarare il costruttore senza parametri. Questo è utile per non dover ogni volta passare il parametro al costruttore nella creazione di un' istanza. Anche se dichiarato senza param il costruttore può essere definito con param. Se si dichaira il costruttore senza param e si definisce un costruttore con param si tratta di "overloading di costruttori". Di fatto sto specificando che nella creazione di un' istanza posso passare o no il parametro. Se non lo passo verrà creata con il costruttore senza param, se lo passo verrà creata con il costruttore con param.
		Zombie(std::string	name);
	// il distruttore in cpp è chiamato quando si libera la mem con free (allocazione dinamica, mem heap) oppure quando la classe istanziata automaticamente(stack) esce dallo scope della funzione dove è stata istanziata
		~Zombie();
		void	announce (void);
};

Zombie *newZombie(std::string n);
void	randomChump(std::string	name);

#endif