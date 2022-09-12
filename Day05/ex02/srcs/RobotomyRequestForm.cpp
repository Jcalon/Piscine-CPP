/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:20:04 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/08 14:11:26 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("DEFAULT")
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src)
{
	this->_target = src.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "DESTRUCTION : " << *this;
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (AForm::execute(executor))
	{
		std::srand((unsigned int)time(NULL));
		if (rand() % 2)
			std::cout << "BZZZZ BZZZZZ " << this->_target << " has been robotomized successfully !" << std::endl;
		else	
			std::cout << "The " << this->_target << " robotomization failed..." << std::endl;
		return (true);
	}
	return (false);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & i)
{
	o << "AForm " << i.getName() << ". Grade to sign : " << i.getSignGrade() << ". Grade to execute : " << i.getExecGrade() << ". Is signed : ";
		if (i.getSigned())
			o << "Yes."<< std::endl;
		else
			o << "No." << std::endl;
	return (o);
}
