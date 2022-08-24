/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:34:57 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/24 18:43:40 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap " << getName() << " called !" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
	std::cout << "A copy of FragTrap " << getName() << " has appeared!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << getName() << " has appeared!" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << getName() << " has disappeared..." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << getName() << " is asking for a high five !!!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, FragTrap const & i)
{
	o << "FragTrap " << i.getName() << " HP : " << i.getHitPoints() << " / EP : " << i.getEnergyPoints() << " / AD : " << i.getAttackDamage() << std::endl;
	return o;
}