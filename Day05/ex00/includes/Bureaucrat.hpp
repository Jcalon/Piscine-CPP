/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:05:06 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/26 12:54:57 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private :
		std::string const	_name;
		int					_grade;

	public :
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
		
		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void 		decrementGrade(void);
		
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Grade too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Grade too low");
			}
	};

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif