/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:42:36 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/05 18:29:28 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{
	
}

std::string Contact::get_firstName(void) const
{
	return (this->_firstName);
}

std::string Contact::get_lastName(void) const
{
	return (this->_lastName);
}

std::string Contact::get_nickName(void) const
{
	return (this->_nickName);
}

std::string Contact::get_phoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string Contact::get_darkestSecret(void) const
{
	return (this->_darkestSecret);
}

void	Contact::create_contact(int index)
{
	_index = index;
	std::cout << "Fill the following informations :" << std::endl;
	std::cout << "FIRST NAME : >" ;
	std::getline(std::cin, _firstName);
	std::cout << "LAST NAME : >" ;
	std::getline(std::cin, _lastName);
	std::cout << "NICKNAME : >" ;
	std::getline(std::cin, _nickName);
	std::cout << "PHONE NUMBER : >" ;
	std::getline(std::cin, _phoneNumber);
	std::cout << "DARKEST SECRET : >" ;
	std::getline(std::cin, _darkestSecret);
}

void	Contact::display_contact(void)
{
	std::cout << "|" << std::setw(10) << _index;
	if (_firstName.length() > 10)
		std::cout << "|" << _firstName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << _firstName;
	if (_lastName.length() > 10)
		std::cout << "|" << _lastName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << _lastName;
	if (_nickName.length() > 10)
		std::cout << "|" << _nickName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << _nickName;
	std::cout << "|" << std::endl;
}

void	Contact::display_infos(void)
{
	std::cout << std::endl << "FIRST NAME : " << _firstName << std::endl;
	std::cout << "LAST NAME : " << _lastName << std::endl;
	std::cout << "NICKNAME : " << _nickName << std::endl;
	std::cout << "PHONE NUMBER : " << _phoneNumber << std::endl;
	std::cout << "DARKEST SECRET : " << _darkestSecret << std::endl;
	std::cout << std::endl << "Tapez ADD pour ajouter un contact, SEARCH ou EXIT" << std::endl;
}