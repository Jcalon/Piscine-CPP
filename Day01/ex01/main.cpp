/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:23:31 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 14:25:35 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	{
		Zombie*	horde;
		int		n = 5;	

		horde = zombieHorde(n, "Foo");
		for (int i = 0; i < n; i++)
		{
			std::cout << i << " " << horde[i].getName() << std::endl;
			horde[i].anounce();
		}
		if (horde)
			delete [] horde;
	}
	{
		Zombie*	horde;
		int 	n = -5;

		horde = zombieHorde(n, "Foo");
	}
	return (0);
}