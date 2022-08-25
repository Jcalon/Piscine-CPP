/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:30:18 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 19:42:22 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Nameless")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "New Nameless Character created !" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "New Character " << name << " created !" << std::endl;
}

Character::Character(Character const & src)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = src;
	std::cout << "Character " << this->getName() << " duplicated !" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	std::cout << "Character " << this->getName() << " destroyed..." << std::endl;
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{	
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int j = 0; j < 4; j++)
	{
		if (this->_inventory[j] == m)
		{
			std::cout << "Character " << this->getName() << " already has this materia" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4 && m != NULL; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << this->getName() << " equip index " << i << " with materia " << this->_inventory[i]->getType() << std::endl;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx])
	{
		std::cout << this->getName() << " unequip index " << idx << " with materia " << this->_inventory[idx]->getType() << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
