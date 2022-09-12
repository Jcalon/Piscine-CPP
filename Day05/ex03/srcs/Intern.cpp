/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:23:23 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/09 18:39:08 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{
	std::cout << "New Intern called !" << std::endl;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	std::cout << "Intern copied !" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern fired !" << std::endl;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string levels[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	while(i < 3 && levels[i] != name)
		i++;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates Shrubbery Creation Form." << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates Robotomy Request Form." << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates Presidential Pardon Form." << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cout << name << " is not a valid form." << std::endl;
			return (NULL);
	}
	return (NULL);
}