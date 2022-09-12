/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:14:34 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/08 14:11:11 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
{
	this->_target = src.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "DESTRUCTION : " << *this;
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (AForm::execute(executor))
	{
		std::cout << this->_target << " was forgiven for his sins !" << std::endl;
		return (true);
	}
	return (false);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & i)
{
	o << "AForm " << i.getName() << ". Grade to sign : " << i.getSignGrade() << ". Grade to execute : " << i.getExecGrade() << ". Is signed : ";
		if (i.getSigned())
			o << "Yes."<< std::endl;
		else
			o << "No." << std::endl;
	return (o);
}
