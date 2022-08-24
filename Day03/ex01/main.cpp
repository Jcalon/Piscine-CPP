/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:19:30 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/24 18:32:01 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	littleRobot("littleRobot");
	ScavTrap	scavRobot("Scavy");
	ScavTrap	anonymusScav;
	ScavTrap	copyScav(scavRobot);
	std::cout << scavRobot << std::endl;
	std::cout << littleRobot << std::endl;
	scavRobot.attack("littleRobot");
	littleRobot.takeDamage(scavRobot.getAttackDamage());
	std::cout << scavRobot << std::endl;
	std::cout << littleRobot << std::endl;
	anonymusScav.guardGate();
	
	return 0;
}