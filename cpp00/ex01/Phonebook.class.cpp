/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:44:31 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/02 12:28:31 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

PhoneBook::PhoneBook() {;}
PhoneBook::~PhoneBook() {;}

void PhoneBook::getContact(int index)
{
	std::cout << std::setw(10) << contacts[index].retFN;
	std::cout << std::setw(10) << contacts[index].retLN;
	std::cout << std::setw(10) << contacts[index].retNick;
	std::cout << std::setw(10) << contacts[index].retPN;
	std::cout << std::setw(10) << contacts[index].retDS;
	return;
}