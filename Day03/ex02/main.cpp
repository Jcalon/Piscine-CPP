/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:19:30 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/24 18:42:24 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	littleRobot("littleRobot");
	FragTrap	FragRobot("Fragy");
	FragTrap	anonymusFrag;
	FragTrap	copyFrag(FragRobot);
	std::cout << FragRobot << std::endl;
	std::cout << littleRobot << std::endl;
	FragRobot.attack("littleRobot");
	littleRobot.takeDamage(FragRobot.getAttackDamage());
	std::cout << FragRobot << std::endl;
	std::cout << littleRobot << std::endl;
	anonymusFrag.highFiveGuys();
	
	return 0;
}