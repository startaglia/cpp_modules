/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:24:11 by startagl          #+#    #+#             */
/*   Updated: 2024/01/16 13:06:13 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    std::string _name;
    // qui ho usato il puntatore perché il puntatore in cpp si può mettere null, il riferimento no
    Weapon *_weaponType;
    
    public:
        // costruttore con solo il nome
        HumanB(const std::string &name);
        // costruttore di default
        ~HumanB();
        // metodo setWeapon, solo per l'humanB
        void    setWeapon(Weapon &weaponType);
        // metodo attack che non ritorna nulla e la funzione è const e non modifica nulla
        void    attack(void) const;
};

#endif
