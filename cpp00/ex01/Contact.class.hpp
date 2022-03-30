/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 05:11:21 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/30 23:36:24 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <iomanip>


class	Contact
{
	std::string	First_Name[10];
	std::string	Last_Name[10];
	std::string	Nickname[10];
	std::string	Phone_Number[10];
	std::string	Darkest_secret[10];
};

#endif