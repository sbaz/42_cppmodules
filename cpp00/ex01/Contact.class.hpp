/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 05:11:21 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/25 05:55:49 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Contact
{
	char	First_Name[10];
	char	Last_Name[10];
	char	Nickname[10];
	char	Phone_Number[10];
	char	Darkest_secret[10];
};

class   PhoneBook
{
	public:
		Phonebook();
		~Phonebook();
		
	int Contact;
};

char	*PhoneBook::getContact(void) const
{
	
}