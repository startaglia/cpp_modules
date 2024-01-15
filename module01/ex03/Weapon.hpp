/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:50:18 by startagl          #+#    #+#             */
/*   Updated: 2024/01/15 15:31:21 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>
class Weapon
{
    // attributo privato type
    std::string type;

    public:
        Weapon();
        Weapon(const std::string& weaponType);
        ~Weapon();
        // funzione membro(metodo) pubblico getter
        const std::string& getType() const;
        // funzione membro (metodo) pubblico setter
        void setType(const std::string& newType);
};

#endif
