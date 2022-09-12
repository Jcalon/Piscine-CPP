/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:51:24 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/08 12:52:25 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		std::string const	_name;
		int	const			_signGrade;
		int	const			_execGrade;
		bool				_signed;

	public :
		Form(void);
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const & src);
		~Form(void);
		
		Form & operator=(Form const & rhs);

		std::string	getName(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;
		bool		getSigned(void) const;
		void		beSigned(Bureaucrat const & bureaucrat);
		
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Form exception : Grade too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Form exception : Grade too low");
			}
	};
};

std::ostream & operator<<(std::ostream & o, Form const & i);

#endif