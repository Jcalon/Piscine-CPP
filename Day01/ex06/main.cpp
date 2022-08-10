/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:26:57 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 20:08:19 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);

	Harl harl;
	std::map<std::string, int>    filter;

    filter["INFO"] = 1;
    filter["DEBUG"] = 2;
    filter["WARNING"] = 3;
    filter["ERROR"] = 4;
	switch(filter[argv[1]])
	{
        case 1:
        {
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("info");
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("debug");
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("warning");
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("error");
            break;
        }
        case 2:
        {
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("debug");
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("warning");
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("error");
            break;
        }
        case 3:
        {
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("warning");
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("error");
            break;
        }
        case 4:
        {
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("error");
            break;
        }
        default: 
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
	}
	return (0);
}