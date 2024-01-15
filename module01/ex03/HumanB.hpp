/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:24:11 by startagl          #+#    #+#             */
/*   Updated: 2024/01/15 18:01:19 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    std::string _name;
    Weapon *_weaponType;
    
    public:
        HumanB(const std::string &name);
        ~HumanB();
        void    setWeapon(const Weapon &weaponType);
        void    attack();
};

#endif
