/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:53:40 by startagl          #+#    #+#             */
/*   Updated: 2023/05/24 11:25:10 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class contact
{
	private:
		std::string name;
		std::string surname;
		std::string	nickname;
		std::string number;
		std::string secret;
		// std::string testa;
	public:
		contact();
		~contact();
		// void	setTesta(std::string testa);
		
		std::	string	getName();
		void	setName(std::string name);
		
		std::	string	getSurname();
		void	setSurname(std::string surname);
		
		std::	string	getNickname();
		void	setNickName(std::string nickname);
		
		std::	string	getNumber();
		void	setNumber(std::string number);
		
		std::	string	getSecret();
		void	setSecret(std::string secret);
};
	