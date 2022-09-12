/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:23:18 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/26 16:48:13 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	private :

	public :
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);
		
		Intern & operator=(Intern const & rhs);

		AForm	*makeForm(std::string name, std::string target);
		
};

#endif