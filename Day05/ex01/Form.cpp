/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:01:27 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/26 14:10:27 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("Standard"), _signGrade(150), _execGrade(150), _signed(false)
{
	std::cout << "Form created. " << *this << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade): _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (this->_execGrade < 1 || this->_signGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_execGrade > 150 || this->_signGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form created. " << *this << std::endl;
}

Form::Form(Form const & src): _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	*this = src;
	std::cout << "Form copied. " << *this << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destroyed. " << *this << std::endl;
}

Form & Form::operator=(Form const & rhs)
{
	this->_signed = rhs.getSigned();
	return (*this);
}

std::string Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

std::ostream & operator<<(std::ostream & o, Form const & i)
{
	o << "Form " << i.getName() << ". Grade to sign : " << i.getSignGrade() << ". Grade to execute : " << i.getExecGrade() << ". Is signed : ";
		if (i.getSigned())
			o << "Yes."<< std::endl;
		else
			o << "No." << std::endl;
	return (o);
}