/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:49:51 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 20:07:02 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "New Ice created !" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	*this = src;
	std::cout << this->_type << " Ice duplicated !" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << this->_type << " Ice destroyed..." << std::endl;
}

Ice & Ice::operator=(Ice const & rhs)
{
	(void)rhs;
	return (*this);
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
