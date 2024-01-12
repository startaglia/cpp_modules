// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //
class Account {
public:
    // Definizione di tipi per la classe Account
    typedef Account t;

    // Metodi statici per ottenere informazioni globali sugli account
    static int getNbAccounts(void);
    static int getTotalAmount(void);
    static int getNbDeposits(void);
    static int getNbWithdrawals(void);
    static void displayAccountsInfos(void);

    // Costruttore della classe Account
    Account(int initial_deposit);

    // Distruttore della classe Account
    ~Account(void);

    // Metodi per effettuare depositi e prelievi, e visualizzare lo stato dell'account
    void makeDeposit(int deposit);
    bool makeWithdrawal(int withdrawal);
    int checkAmount(void) const;
    void displayStatus(void) const;

private:
    // Variabili statiche per tracciare informazioni globali su tutti gli account
    static int _nbAccounts;
    static int _totalAmount;
    static int _totalNbDeposits;
    static int _totalNbWithdrawals;

    // Metodo statico privato per visualizzare il timestamp corrente
    static void _displayTimestamp(void);

    // Variabili di istanza per mantenere le informazioni specifiche di ciascun account
    int _accountIndex;
    int _amount;
    int _nbDeposits;
    int _nbWithdrawals;

    // Costruttore privato senza argomenti per evitare la creazione di oggetti senza inizializzazione
    Account(void);
};




// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
