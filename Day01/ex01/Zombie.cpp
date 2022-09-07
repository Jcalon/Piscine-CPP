/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:05:18 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 12:05:03 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): _name("nameless")
{
	std::cout << "A zombie has spawn..." << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << _name << " the zombie has spawn..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died !" << std::endl;
}

void	Zombie::anounce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void)
{
	return this->_name;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}