/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:52:44 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 17:11:15 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	this->_brain = new Brain;
	std::cout << "New Cat created !" << std::endl;
}

Cat::Cat(Cat const & src): Animal(src)
{
	*this = src;
	std::cout << "Cat duplicated !" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed..." << std::endl;
	delete this->_brain;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	this->_brain = new Brain(*rhs.getBrain());
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}

std::string Cat::getIdea(void)
{
	return NULL;
}

std::string Cat::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return getBrain()->_ideas[i];
	else
		return NULL;
}
