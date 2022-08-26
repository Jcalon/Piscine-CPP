/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:05:01 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/26 14:11:29 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << std::endl << "----Let the bureaucracy begin----" << std::endl << std::endl;
	std::cout << "\n\n---------CREATION TEST---------\n\n" << std::endl;
	Bureaucrat	john;
	Bureaucrat	fred("fred", 45);
	Form		form42("42", 42, 42);
	Form		form149("149", 149, 149);
	Form		*form77_61 = new Form("77_61", 77, 61);

	std::cout << "\n\n---------COPY AND DEEPNESS TEST---------\n\n" << std::endl;

	Form		*form77_61Copy = new Form(*form77_61);
	delete form77_61;
	std::cout << *form77_61Copy << std::endl;
	delete form77_61Copy;

	std::cout << "\n\n---------HI LOW GRADES FORM CREATION TEST---------\n\n" << std::endl;

	try
	{
		Form		form777_1("777_1", 777, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form		form3_minus1("3_minus1", 777, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n---------SIGNS TESTS---------\n\n" << std::endl;

	std::cout << john << std::endl;
	std::cout << fred << std::endl;
	john.signForm(form42);
	john.signForm(form149);
	fred.signForm(form149);
	fred.signForm(form42);
	fred.incrementGrade();
	fred.incrementGrade();
	fred.incrementGrade();
	std::cout << fred << std::endl;
	fred.signForm(form42);
	return (0);
}