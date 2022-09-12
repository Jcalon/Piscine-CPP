/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:22:13 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/08 13:59:38 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
		std::string	_target;

	public :
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		virtual ~PresidentialPardonForm(void);
		
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

		bool		execute(Bureaucrat const &executor) const;
		
		std::string getTarget(void) const;
};

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & i);

#endif
