/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 05:11:21 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/30 18:51:48 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class	Contact
{
	std::string	First_Name[10];
	std::string	Last_Name[10];
	std::string	Nickname[10];
	std::string	Phone_Number[10];
	std::string	Darkest_secret[10];
};

class   PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void getContact(int index);
		void setContact(std::string input);
	private:
		static int	pb_index;

};