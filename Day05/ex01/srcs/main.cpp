/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:05:01 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/10 11:26:18 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << std::endl << "---------CREATION TEST---------" << std::endl << std::endl;
	Bureaucrat	john;
	Bureaucrat	fred("fred", 45);
	Form		form42("42", 42, 42);
	Form		form149("149", 149, 149);
	Form		*form77_61 = new Form("77_61", 77, 61);

	std::cout << std::endl << "---------COPY AND DEEPNESS TEST---------" << std::endl << std::endl;

	Form		form77_61Copy = Form(*form77_61);
	delete form77_61;
	std::cout << form77_61Copy;

	std::cout << std::endl << "---------HI LOW GRADES FORM CREATION TEST---------" << std::endl << std::endl;

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
	std::cout << form42;
	std::cout << form149;
	fred.signForm(form149);
	fred.signForm(form42);
	std::cout << form42;
	std::cout << form149;
	fred.incrementGrade();
	fred.incrementGrade();
	fred.incrementGrade();
	std::cout << fred;
	fred.signForm(form42);
	std::cout << form42;

	return (0);
}