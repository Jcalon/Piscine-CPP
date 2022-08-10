/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:23:31 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 17:08:49 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*				horde;

	horde = zombieHorde(5, "Foo");
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << horde[i].getName() << std::endl;
	}
	delete [] horde;
	return (0);
}