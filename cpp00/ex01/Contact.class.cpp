/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:59:09 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/06 15:03:22 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"
#include <string>
#include <sstream>

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
	int i;
	std::string index;

	if (pb_index > 8)
		max = 8;
	else
		max = pb_index % 8;
	for (int i = 0; i < max; i++)
	{
		std::cout << std::setw(10) << contacts[i].retContactInd() << "|";
		std::cout << std::setw(10) << refined(contacts[i].retFN()) << "|";
		std::cout << std::setw(10) << refined(contacts[i].retLN()) << "|";
		std::cout << std::setw(10) << refined(contacts[i].retNick()) << std::endl;
	}
	std::cout << "Which contact do you want to read? > ";
	std::getline(std::cin, index);
	std::istringstream ( index ) >> i;

	if (i > max || i < 1)
		return;
	else
	{
		std::cout << std::endl;
		std::cout << contacts[i - 1].retFN() << " | ";
		std::cout << contacts[i - 1].retLN() << " | ";
		std::cout << contacts[i - 1].retNick() << " | ";
		std::cout << contacts[i - 1].retPN() << " | ";
		std::cout << contacts[i - 1].retDS() << std::endl;
	}
}

void	PhoneBook::getContactByIndex()
{

}

//		CONTACT CLASS FUNC.

Contact::Contact() {;}
Contact::~Contact() {;}

std::string Contact::retFN()		{return Contact::First_Name;}
std::string Contact::retLN()		{return Contact::Last_Name;}
std::string Contact::retNick()		{return Contact::Nickname;}
std::string Contact::retPN()		{return Contact::Phone_Number;}
std::string Contact::retDS()		{return Contact::Darkest_secret;}
int			Contact::retContactInd(){return	Contact::contact_num;}

int	Contact::eraseContact(std::string str)
{
	if (str.empty())
	{	
		this->First_Name.clear();
		this->Last_Name.clear();
		this->Nickname.clear();
		this->Phone_Number.clear();
		this->Darkest_secret.clear();			
		std::cout << "Invalid empty field, contact erased" << std::endl;
		return (1);
	}
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
				return (0);

		}
		this->First_Name.clear();
		this->Last_Name.clear();
		this->Nickname.clear();
		this->Phone_Number.clear();
		this->Darkest_secret.clear();			
		std::cout << "Invalid empty field, contact erased" << std::endl;
		return (1);

	}
}

void	Contact::addContact(int& pb_index)
{
	std::cout << "First Name> ";
	std::getline(std::cin, First_Name);
	if (eraseContact(First_Name))
		return;
	
	std::cout << "Last Name> ";
	std::getline(std::cin, Last_Name);
	if (eraseContact(Last_Name))
		return;
	
	std::cout << "Nickname> ";
	std::getline(std::cin, Nickname);
	if (eraseContact(Nickname))
		return;

	std::cout << "Phnonenumber> ";
	std::getline(std::cin, Phone_Number);
	if (eraseContact(Phone_Number))
		return;

	std::cout << "Darkest secret> ";
	std::getline(std::cin, Darkest_secret);
	if (eraseContact(Darkest_secret))
		return;
	this->contact_num = pb_index % 8 + 1;
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
