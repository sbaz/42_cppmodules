/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:28:10 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/05 16:44:11 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int main()
{
	PhoneBook	PhnBk;
	std::string	cmd;
	bool		loop;

	loop = true;
	std::cout << "PHONEBOOK RUNNING" << std::endl;
	while(loop == true)
	{
		int	pb_index;
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if(cmd.compare("EXIT") == 0)
		{
			std::cout << "Closing the PhoneBook" << std::endl;
			loop = false;
		}
		if(cmd.compare("ADD") == 0)
		{
			std::cout << "Aggiungi un contatto:\n" << std::endl;
			PhnBk.contacts[pb_index % 8].addContact(pb_index);
		}
		if(cmd.compare("SEARCH") ==  0)
		{
			PhnBk.getFullContacts(pb_index);
		}
	}

	

//	if (istanza.getContact(void) == "(null)")
//		std::cout << "Enter a contact to populate the PhoneBook: use ADD to start" << std::endl;
}