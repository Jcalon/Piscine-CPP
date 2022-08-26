/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:23:23 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/26 16:48:07 by jcalon           ###   ########.fr       */
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
	if (name == "shrubbery creation")
	{
		std::cout << "Intern creates Shrubbery Creation Form." << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (name == "robotomy request")
	{
		std::cout << "Intern creates Robotomy Request Form." << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (name == "presidential pardon")
	{
		std::cout << "Intern creates Presidential Pardon Form." << std::endl;
		return (new PresidentialPardonForm(target));
	}
	(void)target;
	std::cout << name << " is not a valid form." << std::endl;
	return (NULL);
}