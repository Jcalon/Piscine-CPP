/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:27:44 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 12:13:15 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << _type << "weapon constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor called" << std::endl;
}

const std::string	&Weapon::getType(void)
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}