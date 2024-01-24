/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:50:18 by startagl          #+#    #+#             */
/*   Updated: 2024/01/16 12:50:19 by startagl         ###   ########.fr       */
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
        // gli passo il riferimento perchè è l'arma stessa è un valore che voglio modificare
        Weapon(const std::string &weaponType);
        ~Weapon();
        // funzione membro(metodo) pubblico getter. Il primo const indica che il tipo restituito dalla funzione è un riferimento costante ad un oggetto di tipo std::string, quindi il valore a cui il riferimento punta non può essere modificato. Il secondo const indica che la funzione stessa è costante, quindi non modifica alcun membro di dati dell'istanza su che chiamerà getType(). In pratica la funzione potrà essere utilizzata su istanze costanti della classe, garantendo che non verranno modifiche all'istanza stessa
        const std::string &getType() const;
        // funzione membro (metodo) pubblico setter. Questa funct non ritorna nulla e gli viene passato il riferimento ad una stringa costante
        void setType(const std::string &newType);
};

#endif
