/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:19:30 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 14:56:13 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	namelessRobot;
	ClapTrap	littleRobot("littleRobot");
	ClapTrap	bigRobot("bigRobot");
	ClapTrap	duplicatedRobot(bigRobot);

	bigRobot.attack("littleRobot");
	littleRobot.takeDamage(bigRobot.getAttackDamage());
	std::cout << std::endl << bigRobot << std::endl;
	std::cout << littleRobot << std::endl;
	bigRobot.setAttackDamage(5);
	bigRobot.attack("littleRobot");
	littleRobot.takeDamage(bigRobot.getAttackDamage());
	std::cout << std::endl << bigRobot << std::endl;
	std::cout << littleRobot << std::endl;
	bigRobot.attack("littleRobot");
	littleRobot.takeDamage(bigRobot.getAttackDamage());
	std::cout << std::endl << bigRobot << std::endl;
	std::cout << littleRobot << std::endl;
	littleRobot.beRepaired(10);
	std::cout << littleRobot;

	return 0;
}