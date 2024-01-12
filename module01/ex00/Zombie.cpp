/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:33:45 by startagl          #+#    #+#             */
/*   Updated: 2024/01/12 13:44:27 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nel file.ccp ci si mettono le definizioni delle funzioni e delle classi, talvolta è utile mettere le definizioni delle funzioni in file separati. In questo caso c'è la definizione del costruttore e distruttore della classe zombie e la definizione della funct announce
# include "Zombie.hpp"

// definizione costruttore classe Zombie con param
Zombie::Zombie(std::string name)
{
	// assegna all'attributo name della classe la stringa name passata come param
	this->name = name;
}
// definizione distruttore classe zombie
Zombie::~Zombie()
{
	std::cout << this->name << " was killed" << std::endl;
}

// definizione funzione announce
void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}