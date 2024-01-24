/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:45:26 by startagl          #+#    #+#             */
/*   Updated: 2024/01/24 18:45:29 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filename.hpp"

Filename::Filename(std::string filename) : _InputFile(filename) {
    _OutputFile = _InputFile + ".replace";
}
Filename::~Filename(){}

int Filename::replace(std::string s1, std::string s2) {
    // oggetto di nome infile che ha come parametro il nome del file in input, in sostanza apre il file di input in modalità lettura
    std::ifstream	infile(_InputFile.c_str());
    // buff per salvare la riga che sto analizzando
    std::string     buff;
    // subst la uso per agganciarmi alla prima s1 che trovo
    size_t          subIndx;
    // contatore per tenere traccia delle linee analizzate
    int             i = -1;
    // se infile non è andato a buon fine lancio un err sullo standard err di cpp
    if (!infile)
        return (std::cerr << "ERROR: FAILED TO OPEN INPUT FILE", 1);
    //apro un file di output in modalità scrittura
    std::ofstream   outfile(_OutputFile.c_str());
    if (!outfile)
       return (std::cerr << "ERROR: FAILED TO OPEN INPUT FILE", 1);
    // ora ciclo su tutte le linee che stanno dentro inputFile. getline memorizza riga per riga che sta dentro infile e la mette dentro buff; is_open() invece controlla che il file sia ancora aperto. semplicemente restituisce true se il file è ancora aperto e false se è chiuso
    while (std::getline(infile, buff) && infile.is_open())
    {
        // metto a subIndx il primo s1 che trovo nella stringa
        subIndx = buff.find(s1);
        // std::string::npos in cpp è un valore speciale utilizzato per indicare se una determinata posizione in una stringa è stata trovata o non ha restituito un risultato desiderato. In pratica std::string::npos viene da buff.find(s1) e vale un valore impossibile che coinciderà con il valore di subIndx se non è stato trovato con buff.find()
        while (subIndx != std::string::npos)
        {
            // buffer.erase rimuove a partire dalla posizione segnata da subIndx per una length di s1.length(), quindi rimuovo tutto s1
            buff.erase(subIndx, s1.length());
            // inserisce alla posizione indicata da subIndx s2. In cpp la classe string gestisce dinamicamente la mem. quindi togliere con erase e poi mettere con insert una stringa non genera leaks
            buff.insert(subIndx, s2);
            // il primo param di find è la stringa da cercare. s1.c_str() è una funzione di cpp che serve a convertire la stringa da cpp in c_style(ovvero con un null alla fine). Questo serve alla funzione find() solo quando gli passiamo piu di un arg. se find() la utilizzo con un solo arg, come sopra, non serve convertire la stringa in c_style. Il secondo param di find() è la posizione da cui iniziare la ricerca della stringa, in questo caso è l'indice di dove stava il primo s1 trovato + la lunghezza di s2, perchè è già stato sostituito, terzo parametro è il numero massimo di caratteri da scorrere per iniziare la ricerca dal punto specificato
            subIndx = buff.find(s1.c_str(), subIndx + s2.length(), s1.length());
        }
            // qui scrivo il contenuto di buff nel file associato outfile, che è di tipo outputstream
            outfile << buff << std::endl;
            i++;
    }
    // chiude il file di tipo inputstream
    infile.close();
    return 0;
}
