/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:44:28 by startagl          #+#    #+#             */
/*   Updated: 2024/01/25 12:10:39 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {

    Harl HarlIstnz;
    HarlIstnz.complain("debug");
    HarlIstnz.complain("info");
    HarlIstnz.complain("warning");
    HarlIstnz.complain("error");
    return 0;
}
