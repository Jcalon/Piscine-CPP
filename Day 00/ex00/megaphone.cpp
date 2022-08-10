/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:43:50 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/09 17:52:33 by jcalon           ###   ########.fr       */
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
			if (argv[i + 1])
			{
				if (!std::isspace(argv[i + 1][0]) && !std::isspace(argv[i][j - 1]))
					std::cout << " ";
			}
			else
				std::cout << std::endl;
		}
	}
	return (0);
}