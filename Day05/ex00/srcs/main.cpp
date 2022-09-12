/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:05:01 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/10 11:26:06 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "---------HEAP STACK TEST---------" << std::endl << std::endl;

	Bureaucrat random;
	Bureaucrat *fred = new Bureaucrat("fred", 45);
	Bureaucrat peter("peter", 1);
	std::cout << std::endl << random << std::endl;
	std::cout << *fred << std::endl;
	std::cout << peter << std::endl;

	std::cout << "---------COPY DEEP TEST---------" << std::endl << std::endl;

	Bureaucrat *fredCopy = new Bureaucrat(*fred);
	std::cout << *fredCopy;
	delete fred;
	std::cout << *fredCopy;
	delete fredCopy;
	
	std::cout << std::endl << "---------HI LOW CREATION GRADES TEST---------" << std::endl << std::endl;

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

	std::cout << std::endl << "---------INCREMENT DECREMENT TEST---------" << std::endl << std::endl;

	std::cout << peter;
	try
	{
		peter.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << peter;
		try
	{
		peter.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << peter << std::endl;

	std::cout << random;
	try
	{
		random.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << random;
	try
	{
		random.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << random << std::endl;

	return (0);
}