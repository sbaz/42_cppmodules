/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:00:28 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/06 23:41:01 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string input);
		~Zombie();
		void	announce( void );
		Zombie* newZombie( std::string name );
};

Zombie* zombieHorde( int N, std::string name );