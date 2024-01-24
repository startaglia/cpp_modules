/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:49:32 by startagl          #+#    #+#             */
/*   Updated: 2024/01/16 13:16:30 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
    std::string _name;
    // qui basta dare il riferimento perché sono sicuro che l'arma c'è sempre
    Weapon &_weaponType;
    public:
        // l'humanA viene costruito con l'arma sempre
        HumanA(std::string name, Weapon &weaponType);
        ~HumanA();
        void attack(void) const;
};

# endif
