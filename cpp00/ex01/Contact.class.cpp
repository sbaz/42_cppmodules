/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:59:09 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/03 20:15:42 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

void	Contact::addContact(int pb_index)
{
	std::cout << "First Name:";
	std::getline(std::cin, First_Name);
	std::cout << std::endl;
	
	std::cout << "Last Name:";
	std::getline(std::cin, Last_Name);
	std::cout << std::endl;
	
	std::cout << "Nickname:";
	std::getline(std::cin, Nickname);
	std::cout << std::endl;
	
	std::cout << "Phnonenumber:";
	std::getline(std::cin, Phone_Number);
	std::cout << std::endl;

	std::cout << "First Name:";
	std::getline(std::cin, Darkest_secret);
	std::cout << std::endl;
	this->contact_num[pb_index % 8] = pb_index % 8;
}


// Contact::Contact() {;}
// Contact::~Contact() {;}

// std::string Contact::retFN()		{return Contact::First_Name;}
// std::string Contact::retLN()		{return Contact::Last_Name;}
// std::string Contact::retNick()		{return Contact::Nickname;}
// std::string Contact::retPN()		{return Contact::Phone_Number;}
// std::string Contact::retDS()		{return Contact::Darkest_secret;}


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