/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:28:57 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/08 11:06:57 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "Invalid Horde size !" << std::endl;
		return NULL;
	}
	Zombie* horde = new Zombie[N];

	if (!horde)
		return (NULL);

	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}