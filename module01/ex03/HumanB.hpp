/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:24:11 by startagl          #+#    #+#             */
/*   Updated: 2024/01/13 18:42:38 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
# define HUMANB

# include "Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon weaponType;

    public:
        HumanB(const std::string& name);
        ~HumanB();
        void    setWeapon(const Weapon& weaponType);
        void    attack();
};

#endif
