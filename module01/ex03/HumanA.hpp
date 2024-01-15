/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:49:32 by startagl          #+#    #+#             */
/*   Updated: 2024/01/13 18:40:30 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA

# include "Weapon.hpp"

class HumanA
{
    std::string name;
    Weapon weaponType;

    public:
        HumanA(const std::string& name, const Weapon& weaponType);
        ~HumanA();
        void attack();
};

# endif
