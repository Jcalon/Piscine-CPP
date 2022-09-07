/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:37:25 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 14:31:37 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
	std::cout << _name << "Human B constructor called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Human B destructor called" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack... " << std::endl;
}