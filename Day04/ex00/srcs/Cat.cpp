/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:52:44 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 13:50:49 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "New Cat created !" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat duplicated !" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed..." << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
