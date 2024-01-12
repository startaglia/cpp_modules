/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:09:38 by startagl          #+#    #+#             */
/*   Updated: 2023/05/22 16:42:43 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

contact::contact()
{
}

contact::~contact()
{
}

//* GET_SET_NAME
std::string contact::getName()
{
	return this->name;
}
void	contact::setName(std::string _name)
{
	this->name = _name;
}

//* GET_SET_SURNAME
std::string contact::getSurname()
{
	return this->surname;
}
void	contact::setSurname(std::string _surname)
{
	this->surname = _surname;
}

//* GET_SET_NICKNAME
std::string contact::getNickname()
{
	return this->nickname;
}
void	contact::setNickName(std::string _nickname)
{
	this->nickname = _nickname;
}

//* GET_SET_NUMBER
std::string contact::getNumber()
{
	return this->number;
}
void	contact::setNumber(std::string _number)
{
	this->number = _number;
}

//* GET_SET_SECRET
std::string contact::getSecret()
{
	return this->secret;
}
void	contact::setSecret(std::string _secret)
{
	this->secret = _secret;
}