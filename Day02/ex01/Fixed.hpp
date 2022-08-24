/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:57:37 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/24 17:53:30 by jcalon           ###   ########.fr       */
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
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const integer );
		Fixed( float const floatingpoint );
		~Fixed( void );

		Fixed & operator=( Fixed const & rhs );

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int	toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif