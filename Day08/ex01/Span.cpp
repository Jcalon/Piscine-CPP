/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:38:09 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/30 17:33:36 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

Span::Span(void) : _size(0)
{

}

Span::Span(unsigned int size) : _size(size)
{

}

Span::Span(Span const &src) : _size(src.getSize())
{
	*this = src;
}

Span::~Span(void)
{

}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		this->_vector.reserve(this->_size);
		return (*this);
	}
	return (*this);
}

unsigned int	Span::getSize(void) const
{
	return (this->_size);
}

void			Span::addNumber(int number)
{
	try
	{
		if (this->_vector.size() == this->getSize())
			throw FullException();
		this->_vector.push_back(number);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void			Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	try
	{
		while (first != last)
		{
			if (this->_vector.size() == this->getSize())
				throw FullException();
			this->_vector.push_back(*first);
			first++;
		}
		if (this->_vector.size() == this->getSize())
				throw FullException();
			this->_vector.push_back(*last);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	Span::shortestSpan(void)
{
	if ((this->getSize() == 0) || (this->_vector.size() <= 1))
		throw TooSmallException();

	int	span = INT_MAX;
	std::vector<int>::iterator iter = this->_vector.begin();
	std::vector<int>::iterator jiter;

	while (iter != this->_vector.end())
	{
		jiter = iter;
		jiter++;
		while (jiter != this->_vector.end())
		{
			if (abs(*iter - *jiter) < span)
				span = abs(*iter - *jiter);
			jiter++;
		}
		iter++;
	}
	return (span);
}

int	Span::longestSpan(void)
{
	if ((this->getSize() == 0) || (this->_vector.size() <= 1))
		throw TooSmallException();
	return (*max_element(this->_vector.begin(), this->_vector.end()) - *min_element(this->_vector.begin(), this->_vector.end()));
}
