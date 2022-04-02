/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:59:09 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/02 12:25:18 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

Contact::Contact() {;}
Contact::~Contact() {;}

std::string Contact::retFN()		{return Contact::First_Name;}
std::string Contact::retLN()		{return Contact::Last_Name;}
std::string Contact::retNick()		{return Contact::Nickname;}
std::string Contact::retPN()		{return Contact::Phone_Number;}
std::string Contact::retDS()		{return Contact::Darkest_secret;}


// void	Contact::addContact(int index)
// {
	
// }

	// std::string	cmd;
	
	// std::cout << "First name: ";
	// std::getline(std::cin, cmd);
	// this->contacts[index].addStr(cmd, contacts.   contacts.retStr("fn")  );
	// std::cout << "Last name: ";
	// std::getline(std::cin, cmd);
	// addLN(cmd, PhoneBook.);
	// std::cout << "Nickname: ";
	// std::getline(std::cin, cmd);
	// contacts[index].addNick(cmd);
	// std::cout << "Darkest secret: ";
	// std::getline(std::cin, cmd);
	// contacts[index].addDS(cmd);
	// std::cout << "Phonenumber: ";
	// std::getline(std::cin, cmd);
	// contacts[index].addPN(cmd);