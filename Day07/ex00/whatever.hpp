/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:41:04 by crazyd            #+#    #+#             */
/*   Updated: 2022/09/06 16:59:22 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &rhs, T &lhs)
{
	T	&tmp;

	tmp = rhs;
	rhs = lhs;
	lhs = tmp;
}

template<typename T>
T const &min(T &rhs, T &lhs)
{
	return ((rhs > lhs) ? lhs : rhs);
}

template<typename T>
T const &max(T &rhs, T &lhs)
{
	return ((rhs > lhs) ? rhs : lhs);
}

#endif