/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:55:34 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 15:08:49 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Undefined"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Undefined ClapTrap called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "A copy of ClapTrap " << this->getName() << " has appeared!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->getName() << " has appeared!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " has disappeared..." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & i)
{
	o << i.getName() << " HP : " << i.getHitPoints() << " / EP : " << i.getEnergyPoints() << " / AD : " << i.getAttackDamage() << std::endl;
	return o;
}

void	ClapTrap::attack(const std::string & target)
{
	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " is too tired to attack " << target << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " is too broken to attack " << target << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << this->_name << " takes " << amount << " points of damage !" << std::endl;
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " is broken..." << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " is too tired to repair himself " << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " is too broken to repair himself " << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	this->_hitPoints += amount;
	std::cout << this->_name << " HP have been regenerated with a total of " << amount << " points !" << std::endl;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
	std::cout << "Name is now " << this->_name << std::endl;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
	std::cout << this->_name << " AD is now " << this->_attackDamage << std::endl;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
	std::cout << this->_name << " EP is now " << this->_energyPoints << std::endl;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
	std::cout << this->_name << " HP is now " << this->_hitPoints << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getHitPoints( void ) const
{
	return this->_hitPoints;
}