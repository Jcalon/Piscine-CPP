/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crazyd <crazyd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:16:39 by crazyd            #+#    #+#             */
/*   Updated: 2022/08/27 20:32:36 by crazyd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Write : ./convert value" << std::endl;
		return (1);
	}
	Convert value(av[1]);
	value.display();
	return (0);
}