/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:01:38 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 17:15:03 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <sstream>
#include <iomanip>

Brain::Brain(void)
{
	std::string index_str;
	int			index_int;
	std::stringstream	convert;

	std::cout << "New Brain created !" << std::endl;
	for (index_int = 0; index_int < 100; index_int++)
	{
		convert << index_int;
		index_str = convert.str();
		_ideas[index_int] = index_str;
		convert.str("");
	}
}

Brain::Brain(Brain const & src)
{
	*this = src;
	std::cout << "Brain duplicated !" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed..." << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

