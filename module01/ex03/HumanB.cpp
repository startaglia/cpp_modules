/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:24:14 by startagl          #+#    #+#             */
/*   Updated: 2024/01/15 18:01:43 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanB.hpp"
# include <iostream>


    HumanB::HumanB(const std::string &name) : _name(name), _weaponType(NULL)
    {
	    std::cout << "HumanA Constructor called" << std::endl;
    };
    
    HumanB::~HumanB(){};

    void HumanB::setWeapon(const Weapon &weaponType)
    {
        this->_weaponType = weaponType;
    }

    void HumanB::attack()
    {
        std::cout << this->_name << " attacks with their " << this->_weaponType.getType() << std::endl;
    };

