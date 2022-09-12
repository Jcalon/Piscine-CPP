/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:21:01 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/09 15:16:21 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "For target : " << this->_target << ". Creation of " << *this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src)
{
	this->_target = src.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (AForm::execute(executor))
	{
		std::string	line;
		std::string name = this->_target + "_shrubbery";
		std::ifstream	in("trees.txt");
		if (in)
		{
			std::ofstream	out(name.c_str());
			if (out)
			{
				while (getline(in, line))
					out << line << std::endl;
				std::cout << name << " was created and filled with ASCII trees !" << std::endl;
				out.close();
			}
			else
				std::cout <<"Error creating file" << std::endl;
			in.close();
		}
		else
			std::cout <<"Error creating file" << std::endl;
		return (true);
	}
	return (false);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & i)
{
	o << "AForm " << i.getName() << ". Grade to sign : " << i.getSignGrade() << ". Grade to execute : " << i.getExecGrade() << ". Is signed : ";
		if (i.getSigned())
			o << "Yes."<< std::endl;
		else
			o << "No." << std::endl;
	return (o);
}
