/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:59:09 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/31 18:44:41 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"


std::string Contact::retFN		(std::string str)		{return Contact::First_Name;}
std::string Contact::retLN		(std::string str)		{return Contact::Last_Name;}
std::string Contact::retNick	(std::string str)		{return Contact::Nickname;}
std::string Contact::retPN		(std::string str)		{return Contact::Phone_Number;}
std::string Contact::retDS		(std::string str)		{return Contact::Darkest_secret;}


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