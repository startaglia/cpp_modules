/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:09:49 by startagl          #+#    #+#             */
/*   Updated: 2023/06/06 16:12:11 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

phonebook::phonebook()
{
	numContacts = 0;
}

phonebook::~phonebook()
{
    ;
}

void phonebook::add()
{
    if (numContacts == 8)
        numContacts = 0;
    if (numContacts < 8)
        ++numContacts;

    std::cout << "index: " << numContacts - 1 << std::endl;

    //*NAME
    std::string name;
    std::cout << "Insert name: ";
    std::getline(std::cin, name);
    _phonebook[numContacts - 1].setName(name);

    //*SURNAME
    std::string surname;
    std::cout << "Insert surname: ";
    std::getline(std::cin, surname);
    _phonebook[numContacts - 1].setSurname(surname);

    //*NICKNAME
    std::string nickname;
    std::cout << "Insert nickname: ";
    std::getline(std::cin, nickname);
    _phonebook[numContacts - 1].setNickName(nickname);

    //*NUMBER
    std::string number;
    std::cout << "Insert number: ";
    std::getline(std::cin, number);
    _phonebook[numContacts - 1].setNumber(number);

    //*SECRET
    std::string secret;
    std::cout << "Insert secret: ";
    std::getline(std::cin, secret);
    _phonebook[numContacts - 1].setSecret(secret);
}

void phonebook::search()
{
    int index;
    int j = -1;

    this->printTitleTab();
    while (++j < 8)
        this->printContact(j);
    std::string inpt;
    std::cout << "INSERT INDEX: ";

    while (std::cin >> inpt)
    {
        // if (std::cin.eof())
        // {
        //     std::cout << "Fine del file di input." << std::endl;
        //     break;
        // }
        try
        {
            index = std::stoi(inpt);
            if (index >= 0 && index < 8)
            {
                this->printFullContact(index);
                std::cout << std::endl;
                std::cout << "\t" << ANSI_COLOR_GREEN << "ADD" << ANSI_COLOR_RESET;
                std::cout << "\t\t\t" << ANSI_COLOR_BLUE << "SEARCH" << ANSI_COLOR_RESET;
                std::cout << "\t\t\t" << ANSI_COLOR_RED << "EXIT" << ANSI_COLOR_RESET;
                std::cout << std::endl;
                return;
            }
            else
            {
                std::cout << "INVALID NUMBER." << std::endl;
                j = -1;
                this->printTitleTab();
                while (++j < 8)
                    this->printContact(j);
                std::cout << std::endl;
            }
        }
        catch (const std::invalid_argument& e)
        {
            std::cout << "INVALID CHAR." << std::endl;
            j = -1;
            this->printTitleTab();
            while (++j < 8)
                this->printContact(j);
            std::cout << std::endl;
        }
        catch (const std::out_of_range& e)
        {
            std::cout << "NUMBER MUST BE IN AN INT RANGE." << std::endl;
            j = -1;
            this->printTitleTab();
            while (++j < 8)
                this->printContact(j);
            std::cout << std::endl;
        }
        std::cout << "INSERT INDEX: ";
    }
}

void	phonebook::printTitleTab()
{
	std::cout << "|" << std::left << std::setw(10) << "INDEX";
    std::cout << "|" << std::left << std::setw(10) << "FIRSTNAME";
    std::cout << "|" << std::left << std::setw(10) << "LASTNAME";
    std::cout << "|" << std::left << std::setw(10) << "NICKNAME";
    std::cout << "|" << std::endl;
}

void	phonebook::printContact(int j)
{
	std::cout << "|" << std::left << std::setw(10) << j;
	std::string name = _phonebook[j].getName();
	if (_phonebook[j].getName().length() > 9)
	{
		name.resize(9);
		name[name.length() - 1] = '.';
	}
    std::cout << "|" << std::left << std::setw(10) << name;
	std::string surname = _phonebook[j].getSurname();
	if (_phonebook[j].getSurname().length() > 9)
	{
		surname.resize(9);
		surname[surname.length() - 1] = '.';
	}
    std::cout << "|" << std::left << std::setw(10) << surname;
	std::string nickname = _phonebook[j].getNickname();
	if (_phonebook[j].getNickname().length() > 9)
	{
		nickname.resize(9);
		nickname[nickname.length() - 1] = '.';
	}
    std::cout << "|" << std::left << std::setw(10) << nickname << "|" << std::endl;

}
void	phonebook::printFullContact(int j)
{
    std::cout << "INDEX\t : \t" << std::left << j << std::endl;
	std::cout << "NAME\t : \t" << std::left << _phonebook[j].getName() << std::endl;
    std::cout << "SURNAME\t : \t" << std::left << _phonebook[j].getSurname() << std::endl;
    std::cout << "NICKNAME : \t" << std::left << _phonebook[j].getNickname() << std::endl;
    std::cout << "NUMBER\t : \t" << std::left << _phonebook[j].getNumber() << std::endl;
    std::cout << "SECRET\t : \t" << std::left << _phonebook[j].getSecret() << std::endl;
}
