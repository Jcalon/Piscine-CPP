/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:01:27 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/09 15:07:32 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int execGrade): _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (this->_execGrade < 1 || this->_signGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->_execGrade > 150 || this->_signGrade > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm created. " << *this;
}

AForm::AForm(AForm const & src): _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	*this = src;
	std::cout << "AForm copied. " << *this;
}

AForm::~AForm(void)
{
	std::cout << "AForm destroyed. " << *this;
}

AForm & AForm::operator=(AForm const & rhs)
{
	this->_signed = rhs.getSigned();
	return (*this);
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

int	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

bool	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->_signed)
	{
		throw AForm::FormNotSignedException();
		return false;
	}
	if (executor.getGrade() > this->getExecGrade())
	{
		throw AForm::GradeTooLowException();
		return false;
	}
	return true;
}


std::ostream & operator<<(std::ostream & o, AForm const & i)
{
	o << "AForm " << i.getName() << ". Grade to sign : " << i.getSignGrade() << ". Grade to execute : " << i.getExecGrade() << ". Is signed : ";
		if (i.getSigned())
			o << "Yes."<< std::endl;
		else
			o << "No." << std::endl;
	return (o);
}