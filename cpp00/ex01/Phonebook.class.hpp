/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 05:02:26 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/02 12:27:05 by pceccoli         ###   ########.fr       */
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

		void addContact(int index);
		void getContact(int index);
		void init(void);
	private:
		static int	pb_index;
		Contact	contacts[8];

};
#endif