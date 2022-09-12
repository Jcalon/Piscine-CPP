/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:21:49 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/08 14:03:04 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private :
		std::string	_target;

	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm(void);
		
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		bool		execute(Bureaucrat const &executor) const;
		
		std::string getTarget(void) const;
};

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & i);

#endif
