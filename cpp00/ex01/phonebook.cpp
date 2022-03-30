/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:28:10 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/31 00:26:58 by pceccoli         ###   ########.fr       */
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

//	PhnBk.init();
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
			std::cout << "aggiungi un contatto" << std::endl;
		}
	}

	

//	if (istanza.getContact(void) == "(null)")
//		std::cout << "Enter a contact to populate the PhoneBook: use ADD to start" << std::endl;
}