/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:21:40 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 17:03:51 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "New Dog created !" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog(Dog const & src)
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

void Dog::getIdeas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << getBrain()->_ideas[i] << std::endl;
}

void Dog::getIdea(int i)
{
	std::cout << getBrain()->_ideas[i] << std::endl;
}
