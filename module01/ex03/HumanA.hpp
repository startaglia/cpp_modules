/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:49:32 by startagl          #+#    #+#             */
/*   Updated: 2024/01/15 16:23:24 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
    std::string _name;
    Weapon &_weaponType;
    public:
        HumanA(std::string name, Weapon &weaponType);
        ~HumanA();
        void attack(void) const;
};

# endif
