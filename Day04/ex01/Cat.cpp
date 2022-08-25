/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:52:44 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 17:03:34 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "New Cat created !" << std::endl;
	this->_brain = new Brain;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	std::cout << "Cat duplicated !" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destroyed..." << std::endl;
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

void Cat::getIdeas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << getBrain()->_ideas[i] << std::endl;
}

void Cat::getIdea(int i)
{
	std::cout << getBrain()->_ideas[i] << std::endl;
}
