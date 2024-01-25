/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:38:35 by startagl          #+#    #+#             */
/*   Updated: 2024/01/25 12:11:37 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// creo un oggetto di tipo std::map. un oggetto map è una struttura dati associativa che memorizza coppie chiave valore, la chiave qui è di tipo stringa e il valore è un puntatore a funzione membro. qundi ogni elemento della mappa associa una stringa(chiave) ad un puntatore ad una funzione membro di Harl
std::map<std::string, void (Harl::*)()> functionMap;

Harl::Harl() {
    std::cout << "CONSTRUCTURED CALLED" << std::endl;

    // Inizializza la mappatura, quindi di fatto sto popolando la mappa functionMap con le coppie chiave valore che deve riconoscere.
    functionMap["debug"] = &Harl::debug;
    functionMap["info"] = &Harl::info;
    functionMap["warning"] = &Harl::warning;
    functionMap["error"] = &Harl::error;
}

Harl::~Harl() {
    std::cout << "DESTRUCTURE CALLED" << std::endl;
}

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    // Controlla se il livello è nella mappatura. .find(level) restituisce l'indice di dove ha trovato level nella mappa (da specificare che non itera nella mappa ma utilizza algoritmi di ricerca che dipendono dalla struttura della mappa) .end() invece ritorna sempre l'elemento dopo l'ultimo elem della mappa. Non punta effettivametne a nulla che esiste ma è utilizzato in questi confronti per vedere appunto se l'iterazione è arrivata alla fine della sua length. Quindi nel nostro confronto se functionMap.find(level) != functionMap.end() significa che un match lo ha trovato
    if (functionMap.find(level) != functionMap.end()) {
        // Chiama la funzione membro corrispondente, this lo uso perchè devo accedere alla mappa dell'obj corrente e ->* viene utilizzato per chiamare dinamicamente una funzione membro(in questo caso la funzione membro è il risultato di functionMap[level], ad esempio se level è info la funzione membro sarà void Harl::info()). In sostanza devo sempre utilizzare this->* quando utilizzo un puntatore a funzione membro
        (this->*functionMap[level])();
    } else {
        std::cout << "This is not a valid complain: " << level << std::endl;
    }
}



