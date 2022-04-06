/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 05:11:21 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/06 17:24:47 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <iomanip>
# include <string>


class	Contact
{
	public:
		Contact();
		~Contact();

		static int	pb_index;
		void		addContact(int& pb_index);
		int			getNumContacts(int& pb_index);		
		int			retContactInd();

		std::string retFN();
		std::string retLN();
		std::string retNick();
		std::string retPN();
		std::string retDS();
		
	private:
		std::string	First_Name;
		std::string	Last_Name;
		std::string	Nickname;
		std::string	Phone_Number;
		std::string	Darkest_secret;
		int		 	contact_num;
		int			eraseContact(std::string str);
		void		retFullContact(int pb_index);
};

#endif


		// std::string addFN(std::string cmd);
		// std::string addPN(std::string cmd);
		// std::string addNick(std::string cmd);
		// std::string addDS(std::string cmd);