/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:00:40 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 19:09:26 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	Replace	rep(argv[1], argv[2], argv[3]);
	rep.replace_string();
	return (0);
}