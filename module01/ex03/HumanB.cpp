/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:24:14 by startagl          #+#    #+#             */
/*   Updated: 2024/01/13 18:52:08 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanB.hpp"

    HumanB::HumanB(const std::string& name)
    {
        this->name = name;
    };
    
    HumanB::~HumanB(){};

    void HumanB::setWeapon(const Weapon& weaponType)
    {
        this->weaponType = weaponType;
    }

    void HumanB::attack()
    {
        std::cout << this->name << " attacks with their " << this->weaponType.getType() << std::endl;
    };

