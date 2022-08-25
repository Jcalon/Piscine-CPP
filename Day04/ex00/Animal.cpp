/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:04:23 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 13:30:33 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Undefined")
{
	std::cout << "New Animal created !" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "New Animal " << this->_type << " created !" << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
	std::cout << this->_type << " duplicated !" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << this->_type << " Animal destroyed..." << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	std::cout << "Bruh" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Animal const & i)
{
	o << i.getType() << std::endl;
	return (o);
}