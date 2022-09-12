/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:19:42 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/08 18:01:32 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Nameless"), _grade(150)
{
	std::cout << "Nameless grade 150 Bureaucrat called !" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << this->_name << " with grade " << this->_grade << " has been called !" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName())
{
	*this = src;
	std::cout << "A copy of Bureaucrat " << this->_name << " with grade " << this->_grade << " has appeared!" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->_name << " with grade " << this->_grade << " is fired!!!" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

void	Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		_grade++;
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		_grade--;
		std::cerr << e.what() << '\n';
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << "Bureaucrat " << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (o);
}