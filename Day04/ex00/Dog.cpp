/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:21:40 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 13:22:20 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "New Dog created !" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog duplicated !" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed..." << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}