/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:28:10 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/31 19:01:36 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include "phonebook.hpp"


int main()
{
	PhoneBook	PhnBk;
	std::string	cmd;
	bool		loop;

	loop = true;
	while(loop == true)
	{
		std::getline(std::cin, cmd);
		if(cmd.compare("EXIT") == 0)
		{
			std::cout << "Closing the PhoneBook" << std::endl;
			loop = false;
		}
		if(cmd.compare("ADD") == 0)
		{
			std::cout << "Aggiungi un contatto:" << std::endl;
		}
		if(cmd.compare("SEARCH") ==  0)
		{
			PhnBk.getContact();
		}
	}

	

//	if (istanza.getContact(void) == "(null)")
//		std::cout << "Enter a contact to populate the PhoneBook: use ADD to start" << std::endl;
}