/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:23:31 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 12:00:37 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie;
	Zombie zombzomb;

	zombzomb.anounce();
	zombie = newZombie("heap");
	zombie->anounce();
	randomChump("stack");
	delete zombie;
	return (0);
}
