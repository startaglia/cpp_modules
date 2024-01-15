/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:49:00 by startagl          #+#    #+#             */
/*   Updated: 2024/01/13 19:01:35 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "HumanA.hpp"
# include "Weapon.hpp"

HumanA::HumanA(const std::string& name, const Weapon& weaponType)
{
    this->name = name;
    this->weaponType = weaponType;
};

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weaponType.getType() << std::endl;
};
HumanA::~HumanA(){};
