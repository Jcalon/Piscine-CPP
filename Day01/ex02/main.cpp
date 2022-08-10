/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:11:33 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 17:22:00 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
	
	std::cout << "Memory address of the string variable : " << &string << std::endl;
	std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "Value of the string variable : " << string << std::endl;
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
	return (0);
}