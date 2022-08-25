/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:33:28 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 18:33:30 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const & type);
		AMateria(void);
		AMateria(AMateria const & src);
		virtual	~AMateria(void);
		
		AMateria & operator=(AMateria const & rhs);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif
