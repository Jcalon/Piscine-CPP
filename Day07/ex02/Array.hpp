/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:49:25 by crazyd            #+#    #+#             */
/*   Updated: 2022/09/06 16:58:45 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
class	Array
{
	private:
		unsigned int	_len;
		T				*_array;
	
	public:
		Array(void): _len(0), _array(0) {};
		Array(unsigned int len): _len(len), _array(new T[len]()) {};
		Array(Array const &src): _len(src._len), _array(new T[src._len]())
		{
			for (unsigned int i = 0; i < src._len; i++)
				_array[i] = src._array[i];
		};
		~Array(void)
		{
			if (this->_array)
				delete[] this->_array;
		};

		Array &operator=(Array const & rhs)
		{
			if (this == &rhs)
				return *this;
			if (this->_array > 0)
				delete[] this->_array;
			this->_len = rhs._len;
			_array = new T[rhs._len];
			for (unsigned int i = 0; i < rhs._len; i++)
				_array[i] = rhs._array[i];
			return *this;
		};
		T &operator[](unsigned int index) const
		{
			if ((index < 0) || (index >= this->_len))
				throw OutOfRangeException();
			return (this->_array[index]);
		};

	class OutOfRangeException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Index out of range !");
			}
	};
};

#endif