/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:56:08 by startagl          #+#    #+#             */
/*   Updated: 2024/01/25 13:24:41 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main() {
    Fixed a;  // Costruttore di default chiamato
    Fixed b(a);  // Costruttore di copia chiamato
    Fixed c;  // Costruttore di default chiamato
    c = b;  // Operatore di assegnazione chiamato

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
