/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:04:23 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 13:30:33 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Undefined")
{
	std::cout << "New WrongAnimal created !" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "New WrongAnimal " << this->_type << " created !" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
	std::cout << this->_type << " duplicated !" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << this->_type << " WrongAnimal destroyed..." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Brouh" << std::endl;
}

std::ostream & operator<<(std::ostream & o, WrongAnimal const & i)
{
	o << i.getType() << std::endl;
	return (o);
}