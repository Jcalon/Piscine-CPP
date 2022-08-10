/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:27:44 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 17:55:47 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon(void)
{

}

const std::string	&Weapon::getType(void)
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}