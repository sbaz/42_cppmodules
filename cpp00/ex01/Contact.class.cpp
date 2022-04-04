/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:59:09 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/04 23:45:17 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

//		PHONEBOOK CLASS FUNC.

PhoneBook::PhoneBook() {;}
PhoneBook::~PhoneBook() {;}

std::string	PhoneBook::refined(std::string field)
{
	if (field.length() >= 10)
	{
		field.resize(9);
		field.append(".");
		return field;
	}
	else
		return field;
}

void PhoneBook::getFullContacts(int& pb_index)
{
	int max;

	if (pb_index > 8)
		max = 8;
	else
		max = pb_index % 8;
	for (int i = 0; i < max; i++)
	{
		std::cout << std::setw(10) << refined(contacts[i].retFN()) << "|";
		std::cout << std::setw(10) << refined(contacts[i].retLN()) << "|";
		std::cout << std::setw(10) << refined(contacts[i].retNick()) << "|";
		std::cout << std::setw(10) << refined(contacts[i].retPN()) << "|" ;
		std::cout << std::setw(10) << refined(contacts[i].retDS()) << std::endl;

	}
	return;
}

//		CONTACT CLASS FUNC.

Contact::Contact() {;}
Contact::~Contact() {;}

std::string Contact::retFN()		{return Contact::First_Name;}
std::string Contact::retLN()		{return Contact::Last_Name;}
std::string Contact::retNick()		{return Contact::Nickname;}
std::string Contact::retPN()		{return Contact::Phone_Number;}
std::string Contact::retDS()		{return Contact::Darkest_secret;}

void	Contact::addContact(int& pb_index)
{
	std::cout << "First Name>";
	std::getline(std::cin, First_Name);
	
	std::cout << "Last Name> ";
	std::getline(std::cin, Last_Name);
	
	std::cout << "Nickname> ";
	std::getline(std::cin, Nickname);
	
	std::cout << "Phnonenumber> ";
	std::getline(std::cin, Phone_Number);

	std::cout << "Darkest secret>";
	std::getline(std::cin, Darkest_secret);
	this->contact_num[pb_index % 8] = pb_index % 8 + 1;
	std::cout << "Contatto numero " << pb_index % 8 + 1<< " salvato" << std::endl;
	pb_index++;
	return;
}


int	Contact::getNumContacts(int& pb_index)
{
	int index;

	std::cin >> index;
	if (pb_index > 8)
		index = pb_index % 8;
	else
		index = pb_index;
	return index;
}


// void Contact::getContactByIndex()
// {
// 	int index;
// 	std::cout << "Input the index> ";
// 	std::cin >> index;
// 	std::cout << std::endl;
// 	std::cout << Contact::retFN() << "|" << Contact::retLN() << "|" <<
// 		Contact::retNick() << "|" << Contact::retPN() << "|" << retDS() << std::endl;
// }

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