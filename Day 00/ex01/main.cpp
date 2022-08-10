/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:49:58 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/09 18:34:22 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook	phonebook;
	
	std::cout << "Tappez ADD pour ajouter un contact, SEARCH ou EXIT" << std::endl;
	while (command != "EXIT")
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			//addctc
		else if (command == "SEARCH")
			//srch
	}
	return (0);
}