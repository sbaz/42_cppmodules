/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 05:02:26 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/03 19:42:54 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"


class   PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void addContact();
		void getFullContacts(int pb_index);
		void init(void);
		Contact	contacts[8];
	private:

};
#endif