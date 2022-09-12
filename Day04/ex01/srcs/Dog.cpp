/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:21:40 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/09 13:48:16 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "New Dog created !" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog(Dog const & src): Animal(src)
{
	*this = src;
	std::cout << "Dog duplicated !" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destroyed..." << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	this->_brain = new Brain(*rhs.getBrain());
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->_brain);
}

std::string Dog::getIdea(void)
{
	return NULL;
}

std::string Dog::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return getBrain()->_ideas[i];
	else
		return NULL;
}

