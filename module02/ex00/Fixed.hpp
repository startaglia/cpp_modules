/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:56:46 by startagl          #+#    #+#             */
/*   Updated: 2024/01/25 13:35:06 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

    // questo è il valore intero a virgola fissa, se ad esempio inserisco 23,14 value varrà 10111 100011 (in binario) che corrisponde a 23,14 in virgola fissa con 8 bit per la parte frazionaria. La parte intera è 23 e la parte frazionaria è 0.14. Per convertire la parte frazionaria in formato binario la moltiplichiamo per 2 alla 8 dato che abbiamo 8 bit per la parte frazionaria(darebbe il valore di FractBitNum). Quindi 0.14 * 256 = 35,84. Ora la parte frazionaria in binario sarà 100011, ovvero 35 in decimale. Alla fine il valore di value quindi è la parte intera in binario che sarebbe 23-->10111 e la parte decimale in binario, quindi 35-->100011.
    int value;
    // intero statico che rappresenta il numero di bit frazionari, in questo caso sarà sempre 8.
    static const int FractBitNum;
    public:
        Fixed();
        ~Fixed();
};

#endif
