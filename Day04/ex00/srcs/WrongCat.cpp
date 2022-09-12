/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:52:44 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 13:43:09 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "New WrongCat created !" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat duplicated !" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed..." << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
