/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:27:08 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/30 17:21:00 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_vector;
	
	public:
		Span(void);
		Span(Span const &src);
		Span(unsigned int	size);
		~Span(void);

		Span &operator=(Span const &rhs);

		void			addNumber(int number);
		void			addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		int				shortestSpan(void);
		int				longestSpan(void);
		unsigned int	getSize(void) const;
	
	class FullException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Span is full !");
			}
	};

	class TooSmallException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Span is too small !");
			}
	};
	
};

#endif