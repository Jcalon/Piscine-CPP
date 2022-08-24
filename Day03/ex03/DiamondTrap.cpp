/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:45:39 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/24 19:49:36 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	_name = "nameless_diamond";
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap " << getName() << " called !" << std::endl;
	FragTrap::setHitPoints(100);
	ScavTrap::setEnergyPoints(50);
	FragTrap::setAttackDamage()
	setAttackDamage(20);
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ClapTrap(src)
{
	std::cout << "A copy of DiamondTrap " << getName() << " has appeared!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	std::cout << "DiamondTrap " << ClapTrap::getName() << " has appeared!" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << getName() << " has disappeared..." << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	DiamondTrap::guardGate(void)
{
	std::cout << "DiamondTrap " << getName() << " is now in gate keeper mode !!!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, DiamondTrap const & i)
{
	o << "DiamondTrap " << i.getName() << " HP : " << i.getHitPoints() << " / EP : " << i.getEnergyPoints() << " / AD : " << i.getAttackDamage() << std::endl;
	return o;
}