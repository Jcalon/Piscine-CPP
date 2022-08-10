/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:05:18 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 16:19:50 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name): _name(name)
{
	
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died !" << std::endl;
}

void	Zombie::anounce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}