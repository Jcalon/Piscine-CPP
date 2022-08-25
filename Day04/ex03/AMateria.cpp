/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:26:36 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 18:39:56 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void) : _type("Empty")
{
	std::cout << "New empty AMateria created !" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "New AMateria " << this->_type << " created !" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	std::cout << this->_type << " AMateria duplicated !" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << this->_type << " AMateria destroyed..." << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	(void)rhs;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
