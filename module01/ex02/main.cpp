/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:28:01 by startagl          #+#    #+#             */
/*   Updated: 2024/01/12 15:36:55 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>


int main()
{
	std::string brain = "HI THIS IS BRAIN";

	// Puntatore alla stringa
	std::string *stringPTR = &brain;
	// Referenza alla stringa, una referenza in cpp è un alias, cioè un nome alternativo con cui è possibile chiamare quella var, la sintassi è come segue
	std::string &stringREF = brain;

	// Indirizzo di memoria della variabile stringa.
    std::cout << "Indirizzo di memoria della variabile stringa: " << &brain << std::endl;
    // Indirizzo di memoria contenuto in stringPTR.
    std::cout << "Indirizzo di memoria contenuto in stringPTR: " << stringPTR << std::endl;
    // Indirizzo di memoria contenuto in stringREF.
    std::cout << "Indirizzo di memoria contenuto in stringREF: " << &stringREF << std::endl;

	// Stringa originale.
	std::cout << "Stringa originale: " << brain << std::endl;
	// Stringa stampata attraverso il puntatore.
	std::cout << "Stringa attraverso il puntatore: " << *stringPTR << std::endl;
	// Stringa stampata attraverso la referenza.
	std::cout << "Stringa attraverso la referenza: " << stringREF << std::endl;

	return 0;
}