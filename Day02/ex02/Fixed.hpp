/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:57:37 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/06 17:44:28 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
#include <math.h>

class Fixed
{
	private :
		int	_rawbits;
		static int const	_fractionalbitspart;

	public :
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const integer);
		Fixed(float const floatingpoint);
		~Fixed();

		Fixed & operator=( Fixed const & rhs);
		Fixed operator+( Fixed const & rhs);
		Fixed operator-( Fixed const & rhs);
		Fixed operator*( Fixed const & rhs);
		Fixed operator/( Fixed const & rhs);

		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static const Fixed	&min(Fixed const & val1, Fixed const & val2);
		static const Fixed	&max(Fixed const & val1, Fixed const & val2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif