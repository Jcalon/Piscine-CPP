/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:55:34 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/24 14:52:50 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _rawbits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( int const integer )
{
	std::cout << "Int constructor called" << std::endl;
	_rawbits = integer << Fixed::_fractionalbitspart;
}

Fixed::Fixed( float const floatingpoint )
{
	std::cout << "Float constructor called" << std::endl;
	_rawbits = (int)roundf(floatingpoint * (1 << _fractionalbitspart));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	_rawbits = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

void	Fixed::setRawBits( int const raw )
{
	_rawbits = raw;
}

int	Fixed::getRawBits( void ) const
{
	return _rawbits;
}

int	Fixed::toInt( void ) const
{
	return (_rawbits >> Fixed::_fractionalbitspart);
}

float	Fixed::toFloat( void ) const
{
	return ((float)_rawbits / (float)(1 << _fractionalbitspart));
}

int const	Fixed::_fractionalbitspart = 8;