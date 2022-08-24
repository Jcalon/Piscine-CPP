/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:55:34 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/24 17:03:01 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Undefined"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Undefined ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "A copy of " << getName() << " has appeared!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << getName() << " has appeared!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " has disappeared..." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	_name = rhs.getName();
	_hitPoints = rhs.getHitPoints();
	_energyPoints = rhs.getEnergyPoints();
	_attackDamage = rhs.getAttackDamage();
	return *this;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & i)
{
	o << i.getName() << " HP : " << i.getHitPoints() << " / EP : " << i.getEnergyPoints() << " / AD : " << i.getAttackDamage() << std::endl;
	return o;
}

void	ClapTrap::attack(const std::string & target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is too tired to attack " << target << std::endl;
		return ;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is too broken to attack " << target << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage !" << std::endl;
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is broken..." << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is too tired to repair himself " << std::endl;
		return ;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is too broken to repair himself " << std::endl;
		return ;
	}
	_energyPoints -= 1;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " HP have been regenerated with a total of " << amount << " points !" << std::endl;
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
	std::cout << "ClapTrap name is now " << _name << std::endl;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
	std::cout << "ClapTrap " << _name << " AD is now " << _attackDamage << std::endl;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	_energyPoints = amount;
	std::cout << "ClapTrap " << _name << " EP is now " << _energyPoints << std::endl;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	_hitPoints = amount;
	std::cout << "ClapTrap " << _name << " HP is now " << _hitPoints << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return _name;
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return _attackDamage;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return _energyPoints;
}

unsigned int	ClapTrap::getHitPoints( void ) const
{
	return _hitPoints;
}