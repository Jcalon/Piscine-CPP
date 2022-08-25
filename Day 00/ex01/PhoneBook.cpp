/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:43:14 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 12:58:09 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::_nbContacts = 0;

PhoneBook::PhoneBook(void)
{
	
}

PhoneBook::~PhoneBook(void)
{
	
}

void PhoneBook::add_contact(void)
{
	_contacts[_nbContacts % 8].create_contact(_nbContacts % 8);
	_nbContacts += 1;
}

void PhoneBook::search_contact(void)
{
	std::string index_str;
	int			index_int;
	std::stringstream	convert;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8; i++)
		if (i < _nbContacts)
			_contacts[i].display_contact();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Entrez l'index du contact à afficher" << std::endl;
	std::getline(std::cin, index_str);
	convert << index_str;
	convert >> index_int;
	if (index_int >= 0 && index_int < 8)
	{
		if (index_int <= _nbContacts)
			_contacts[index_int].display_infos();
		else
			std::cout << "Cet index n'existe pas" << std::endl;
	}	
	else
		std::cout << "Cet index n'existe pas" << std::endl;
}