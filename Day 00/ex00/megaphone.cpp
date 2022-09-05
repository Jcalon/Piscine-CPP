/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:43:50 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/05 18:04:45 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	size_t j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(size_t i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
				std::cout << (char) std::toupper(argv[i][j]);
		}
	}
	return (0);
}