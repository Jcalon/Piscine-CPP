/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:05:01 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/26 17:26:53 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << std::endl << "----Let the bureaucracy begin----" << std::endl << std::endl;
	
	std::cout << "\n\n---------FORMS CREATION TEST---------\n\n" << std::endl;

	PresidentialPardonForm form("Jack");
	ShrubberyCreationForm form2("my_beautyfull_ASCII_trees");
	RobotomyRequestForm form3("Someone");

	std::cout << "\n\n---------SIGN AND EXECUTE TEST---------\n\n" << std::endl;

	Bureaucrat	random;
	Bureaucrat	fred("Fred", 1);
	
	random.executeForm(form);
	fred.executeForm(form);
	fred.executeForm(form2);
	fred.executeForm(form3);

	random.signForm(form);
	std::cout << form << std::endl;
	fred.signForm(form);
	fred.signForm(form3);
	fred.signForm(form2);
	
	random.executeForm(form);
	fred.executeForm(form);
	fred.executeForm(form3);
	fred.executeForm(form2);

	std::cout << "\n\n---------NEW INCREMENT DECREMENT CHECK TEST---------\n\n" << std::endl;

	std::cout << random << std::endl;
	std::cout << fred << std::endl;
	
	fred.incrementGrade();
	fred.incrementGrade();
	fred.incrementGrade();
	random.decrementGrade();
	random.decrementGrade();
	random.decrementGrade();
	
	std::cout << fred << std::endl;
	std::cout << random << std::endl;

	return (0);
}