/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:44:31 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/03 20:38:40 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook()
{
	int i;

	i = 0;
	while (i < 8)
		contacts[i];		
}

PhoneBook::~PhoneBook() {;}

void PhoneBook::getFullContacts(int pb_index)
{
	std::cout << std::setw(10) << contacts[pb_index % 8].retFN();
	std::cout << std::setw(10) << contacts[pb_index % 8].retLN();
	std::cout << std::setw(10) << contacts[pb_index % 8].retNick();
	std::cout << std::setw(10) << contacts[pb_index % 8].retPN();
	std::cout << std::setw(10) << contacts[pb_index % 8].retDS();
	return;
}

