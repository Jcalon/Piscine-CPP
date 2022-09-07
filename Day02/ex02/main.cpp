/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:19:30 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 12:42:30 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(10);
	Fixed d(2.25f);
	std::cout << std::endl << "c: " << c << " d: " << d << std::endl;
	std::cout << "c / d: " << c / d << std::endl;
	std::cout << "c * d: " << c * d << std::endl;
	std::cout << "c + d: " << c + d << std::endl;
	std::cout << "c - d: " << c - d << std::endl;

	if (c < d)
		std::cout << "c < d" << std::endl;
	else
		std::cout << "c > d" << std::endl;
	if ((c / d) <= (c / d))
		std::cout << "OK" << std::endl;
	else
		std::cout << "KO" << std::endl;
	if ((c * d) >= (c * d))
		std::cout << "OK" << std::endl;
	else
		std::cout << "KO" << std::endl;
	if (c == d)
		std::cout << "c == d" << std::endl;
	else
		std::cout << "c != d" << std::endl;
	if ((c - d) != (c - d))
		std::cout << "KO" << std::endl;
	else
		std::cout << "OK" << std::endl;

	return 0;
}