/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:24:14 by startagl          #+#    #+#             */
/*   Updated: 2024/01/16 13:15:31 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanB.hpp"
# include <iostream>

    // definizione del costruttore con solo il nome
    HumanB::HumanB(const std::string &name) : _name(name), _weaponType(NULL)
    {
	    std::cout << "HumanA Constructor called" << std::endl;
    };
    
    // definizione del distruttore
    HumanB::~HumanB()
    {
        std::cout << "HumanB Destructor called" << std::endl;
    };

    // definizione di setWeapon, qui sto già passando un riferimento come argomento parametro, quindi sto passando l'indirizzo di mem. _weaponType è un puntatore quindi posso assegnare direttamente l'indirizzo di mem (il riferimento) al puntatore _weaponType
    void HumanB::setWeapon(Weapon &weaponType)
    {
        this->_weaponType = &weaponType;
    }

    void HumanB::attack(void) const
    {
        // humanB può non avere l'arma. qui gestisco il caso non mandando in segfault
        if(!_weaponType)
        {
            std::cout << "HumanB has no weapon to attack with." << std::endl;
            return;
        }
        // se ha l'arma attacca
        std::cout << this->_name << " attacks with their " << _weaponType->getType() << std::endl;
    };

