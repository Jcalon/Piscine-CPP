/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:51:24 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/26 16:15:06 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private :
		std::string const	_name;
		int					_signGrade;
		int					_execGrade;
		bool				_signed;
		AForm(void);

	protected :
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
		class FormNotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Form exception : Not signed");
				}
		};

	public :
		AForm(std::string name, int signGrade, int execGrade);
		AForm(AForm const & src);
		virtual ~AForm(void);
		
		AForm & operator=(AForm const & rhs);

		std::string		getName(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;
		bool			getSigned(void) const;
		void			beSigned(Bureaucrat const & bureaucrat);
		virtual bool	execute(Bureaucrat const & executor) const = 0;
		
};

std::ostream & operator<<(std::ostream & o, AForm const & i);

#endif