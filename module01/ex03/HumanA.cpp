/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:49:00 by startagl          #+#    #+#             */
/*   Updated: 2024/01/16 13:19:05 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "HumanA.hpp"
# include "Weapon.hpp"

// Assegno direttamente l'argomento 'name' del costruttore alla variabile di membro '_name' della classe. Stessa cosa per il riferimento a 'weaponType', assegnandolo direttamente al membro '_weaponType'.
HumanA::HumanA(const std::string name, Weapon &weaponType) : _name(name), _weaponType(weaponType)
{
    std::cout << "HumanA Constructor called" << std::endl;
};

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor called" << std::endl;
};
void HumanA::attack() const
{
    std::cout << this->_name << " attacks with their " << this->_weaponType.getType() << std::endl;
};
