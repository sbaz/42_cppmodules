/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 05:11:21 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/31 18:42:09 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <iomanip>


class	Contact
{
	public:
		std::string retFN(std::string str);
		std::string retLN(std::string str);
		std::string retNick(std::string str);
		std::string retPN(std::string str);
		std::string retDS(std::string str);

		// std::string addFN(std::string cmd);
		// std::string addPN(std::string cmd);
		// std::string addNick(std::string cmd);
		// std::string addDS(std::string cmd);
	private:
		std::string	First_Name;
		std::string	Last_Name;
		std::string	Nickname;
		std::string	Phone_Number;
		std::string	Darkest_secret;
};

#endif
