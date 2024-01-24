/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:50:22 by startagl          #+#    #+#             */
/*   Updated: 2024/01/16 13:03:15 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

// costruttore che setta subito il tipo di arma passata come param, di fatto in questo esercizio serve solo questo di costruttore
Weapon::Weapon(const std::string &weaponType)
{
    setType(weaponType);
}
// costruttore di default che deve esserci per forza
Weapon::Weapon(){};
// distruttore
Weapon::~Weapon(){};

// metodo che ritorna il riferimento al tipo
const std::string &Weapon::getType() const
{
    return this->type;
}

// metodo che setta il tipo
void Weapon::setType(const std::string &weaponType)
{
    this->type = weaponType;
}

