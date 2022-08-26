/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:05:01 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/26 12:49:04 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\n\n---------HEAP STACK TEST---------\n\n" << std::endl;

	Bureaucrat random;
	Bureaucrat *fred = new Bureaucrat("fred", 45);
	Bureaucrat peter("peter", 1);
	std::cout << random << std::endl;
	std::cout << *fred << std::endl;
	std::cout << peter << std::endl;

	std::cout << "\n\n---------COPY DEEP TEST---------\n\n" << std::endl;

	Bureaucrat *fredCopy = new Bureaucrat(*fred);
	std::cout << *fredCopy << std::endl;
	delete fred;
	std::cout << *fredCopy << std::endl;
	delete fredCopy;
	
	std::cout << "\n\n---------HI LOW CREATION GRADES TEST---------\n\n" << std::endl;

	try
	{
		Bureaucrat louise("louise", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat mary("mary", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "\n\n---------INCREMENT DECREMENT TEST---------\n\n" << std::endl;

	std::cout << peter << std::endl;
	try
	{
		peter.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << peter << std::endl;

	std::cout << random << std::endl;
	try
	{
		random.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << random << std::endl;

	return (0);
}