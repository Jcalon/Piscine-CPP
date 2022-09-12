/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:22:37 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/08 14:03:13 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private :
		std::string	_target;

	public :
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm(void);
		
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		bool		execute(Bureaucrat const &executor) const;
		
		std::string getTarget(void) const;
};

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & i);

#endif
