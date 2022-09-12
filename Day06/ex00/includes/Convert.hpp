/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:35:21 by crazyd            #+#    #+#             */
/*   Updated: 2022/09/10 16:05:34 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

#define CHAR	1
#define NUM		2

class Convert
{
	private:
		std::string	_str;
		int			_type;

	public:
		Convert(void);
		explicit Convert(std::string str="");
		Convert(Convert const &src);
		~Convert(void);

		Convert &operator=(Convert const &rhs);

		void		display(void);
		std::string	get_str(void) const;
		int			get_type(void) const;

		void	check_input(void);
		bool	check_char(void);
		bool	check_int(void);
		bool	check_float(void);
		bool	check_double(void);
		
		char	convert_to_char(void);
		int		convert_to_int(void);
		float	convert_to_float(void);
		double	convert_to_double(void);

	class TypeNotFoundException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Value is neither int, float, double or printable char");
			}
	};

	class ImpossibleException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("impossible");
			}
	};

	class NotDisplayableException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Non displayable");
			}
	};

};

#endif