/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crazyd <crazyd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:35:21 by crazyd            #+#    #+#             */
/*   Updated: 2022/08/27 20:30:24 by crazyd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

class Convert
{
	private:
		std::string	_str;

	public:
		Convert(void);
		explicit Convert(std::string str="");
		Convert(Convert const &src);
		~Convert(void);

		Convert &operator=(Convert const &rhs);

		void		display(void);
		std::string	get_str(void) const;

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
				return ("Not displayable");
			}
	};

};

#endif