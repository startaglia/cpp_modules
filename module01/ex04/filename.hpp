/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:22:03 by startagl          #+#    #+#             */
/*   Updated: 2024/01/24 18:18:46 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILENAME_HPP
# define FILENAME_HPP

#include <iostream>
#include <fstream>

class Filename {
    // membri privati, uno è inputFile, quindi il file che passo come argomento e l'altro è outFile cioè il file risultante.replace
    std::string _InputFile;
    std::string _OutputFile;

    public:
        //costruttore che prende una stringa che sarebbe il nome del file in input
        Filename(std::string filename);
        // distruttore
        ~Filename();
        // metodo replace che prende le due stringhe come argomenti
        int replace(std::string s1, std::string s2);
};

#endif
