/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:52:04 by startagl          #+#    #+#             */
/*   Updated: 2023/06/06 15:02:47 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	class phonebook
	{
		private:
			int numContacts;
			contact _phonebook[8];
		public:
			phonebook();
			~phonebook();
			void	add();
			void	search();
			void	printTitleTab();
			void	printContact(int j);
			void	printFullContact(int j);
	};