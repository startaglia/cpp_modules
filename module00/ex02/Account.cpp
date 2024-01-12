/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:17:58 by startagl          #+#    #+#             */
/*   Updated: 2024/01/04 16:21:33 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include "Account.hpp"
#include <iostream>
#include <ctime>

// Inizializzazione delle variabili statiche della classe
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Costruttore della classe Account
Account::Account( int initial_deposit )
{
	// Incrementa il numero totale di account
	_nbAccounts++;

	// Inizializza l'ammontare del conto con il deposito iniziale
	_amount = initial_deposit;

	// Aggiorna l'ammontare totale di tutti gli account
	_totalAmount += initial_deposit;

	// Imposta l'indice del conto
	_accountIndex = _nbAccounts - 1;

	// Inizializza i contatori di depositi e prelievi per questo account
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	// Visualizza il timestamp e un messaggio indicante la creazione dell'account
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

// Distruttore della classe Account
Account::~Account( void )
{
	// Visualizza il timestamp e un messaggio indicante la chiusura dell'account
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

// Metodo privato per visualizzare il timestamp corrente
void	Account::_displayTimestamp( void )
{
	struct tm	*timeinfo;
	time_t		rawtime;
	char		buffer[20];

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );

	strftime ( buffer, 20, "[%Y%m%d_%H%M%S] ", timeinfo );
	std::cout << buffer;
}

// Metodo statico per visualizzare le informazioni generali di tutti gli account
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits \
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// Metodo per effettuare un deposito nell'account
void	Account::makeDeposit( int deposit )
{
	// Aggiorna l'ammontare dell'account e l'ammontare totale
	this->_amount += deposit;
	this->_totalAmount += deposit;

	// Incrementa i contatori di depositi per questo account e per tutti gli account
	this->_nbDeposits++;
	this->_totalNbDeposits++;

	// Visualizza il timestamp e un messaggio indicante il deposito
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit \
		<< ";amount" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

// Metodo per effettuare un prelievo dall'account
bool	Account::makeWithdrawal( int withdrawal )
{
	// Verifica se l'account ha fondi sufficienti per il prelievo
	if (this->_amount < withdrawal)
	{
		// Visualizza un messaggio di rifiuto e restituisce false
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount \
			<< ";withdrawal:refused;" << std::endl;
		return false;
	}

	// Aggiorna l'ammontare dell'account e l'ammontare totale
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;

	// Incrementa i contatori di prelievi per questo account e per tutti gli account
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;

	// Visualizza il timestamp e un messaggio indicante il prelievo
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal \
		<< ";withdrawal:" << withdrawal << ";amount" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	// Restituisce true indicando che il prelievo è avvenuto con successo
	return true;
}

// Metodo per visualizzare lo stato corrente dell'account
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount \
		<< ";nb_deposits:" << this->_nbDeposits << ";withdrawal:" << this->_nbWithdrawals << std::endl;
}

// Metodo per ottenere l'ammontare corrente dell'account
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

// Metodi statici per ottenere informazioni generali su tutti gli account
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}



