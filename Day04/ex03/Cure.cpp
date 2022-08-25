/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:43:51 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 20:07:13 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "New Cure created !" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	*this = src;
	std::cout << this->_type << " Cure duplicated !" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << this->_type << " Cure destroyed..." << std::endl;
}

Cure & Cure::operator=(Cure const & rhs)
{
	(void)rhs;
	return (*this);
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
