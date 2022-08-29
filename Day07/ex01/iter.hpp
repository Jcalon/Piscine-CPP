/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crazyd <crazyd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:49:40 by crazyd            #+#    #+#             */
/*   Updated: 2022/08/29 21:01:27 by crazyd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T const *array, size_t const len, void f(T const &src))
{
	for(size_t i = 0; i < len; i++)
		f(array[i]);
}

template <typename T>
void	print(T const &src)
{
	std::cout << src << std::endl;
}

#endif