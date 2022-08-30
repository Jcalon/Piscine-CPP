/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:54:06 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/30 15:16:35 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Value not found in that container !");
		}
};

template<typename T>
typename T::iterator easyfind(T &container, int nbr)
{
	typename T::iterator find = std::find(container.begin(), container.end(), nbr);
	if (find == container.end())
		throw NotFoundException();
	return find;
}

#endif