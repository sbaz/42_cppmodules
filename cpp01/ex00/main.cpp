/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:57:25 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/06 23:25:10 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main()
{
	Zombie* zombie1;
	Zombie* zombie2;

	zombie1 = newZombie("primo");
	zombie2 = newZombie("secondo");
	zombie1->announce();
	zombie2->announce();
	randomChump("terzo");
	delete zombie1;
	delete zombie2;
}