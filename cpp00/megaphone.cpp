/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:55:08 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/20 19:55:10 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    const char *std_message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    if (argc == 1)
    {
        std::cout << std_message << std::endl;
    }
    else
    {
        i = 1;
        while(argv[i]){
            j = 0;
            while ( argv[i][j])
            {
                std::cout << (static_cast<char>(toupper(argv[i][j])));
                j++;
            }
            i++;
        }
    }
}