/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:55:34 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 12:37:24 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawbits(0)
{

}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(int const integer)
{
	this->_rawbits = integer << Fixed::_fractionalbitspart;
}

Fixed::Fixed(float const floatingpoint)
{
	this->_rawbits = (int)roundf(floatingpoint * (1 << Fixed::_fractionalbitspart));
}

Fixed::~Fixed()
{

}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	this->_rawbits = rhs.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const & rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs)
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs)
{
	return (this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed & Fixed::operator++(void)
{
	this->_rawbits++;
	return (*this);
}

Fixed & Fixed::operator--(void)
{
	this->_rawbits--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed result(*this);
	this->_rawbits++;
	return (result);
}

Fixed Fixed::operator--(int)
{
	Fixed result(*this);
	this->_rawbits--;
	return (result);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

void	Fixed::setRawBits( int const raw )
{
	this->_rawbits = raw;
}

int	Fixed::getRawBits( void ) const
{
	return this->_rawbits;
}

int	Fixed::toInt( void ) const
{
	return (this->_rawbits >> Fixed::_fractionalbitspart);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_rawbits / (float)(1 << this->_fractionalbitspart));
}

Fixed const	&Fixed::min(Fixed const & val1, Fixed const & val2)
{
	if (val1 < val2)
		return (val1);
	return (val2);
}

Fixed const	&Fixed::max(Fixed const & val1, Fixed const & val2)
{
	if (val1 > val2)
		return (val1);
	return (val2);
}

int const	Fixed::_fractionalbitspart = 8;