/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:57:37 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/24 17:53:22 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private :
		int	_rawbits;
		static int const	_fractionalbitspart;

	public :
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed & operator=( Fixed const & rhs );
		~Fixed( void );

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif