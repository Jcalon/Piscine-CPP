/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crazyd <crazyd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:35:54 by crazyd            #+#    #+#             */
/*   Updated: 2022/08/27 21:15:50 by crazyd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{

}

Convert::Convert(std::string str) : _str(str)
{

}

Convert::Convert(Convert const &src) : _str(src._str)
{

}

Convert::~Convert(void)
{

}

Convert &Convert::operator=(Convert const &src)
{
	if (this != &src)
		this->_str = src._str;
	return (*this);
}

std::string	Convert::get_str(void) const
{
	return (this->_str);
}

void Convert::check_input(void)
{
	if (!this->check_char() && !this->check_int() && !this->check_float() && !this->check_double())
		throw Convert::TypeNotFoundException();
}

bool Convert::check_char(void)
{
	std::string	input = this->get_str();

	if (input.length() == 1)
	{
		if (!isprint(input.c_str()[0]))
			return (false);
		return (true);
	}
	return (false);
}

bool Convert::check_int(void)
{
	std::string	input = this->get_str();
	size_t		i = 0;

	if (input.c_str()[i] == '+' || input.c_str()[i] == '-')
		i++;
	while (i < input.length() && isdigit(input.c_str()[i]))
		i++;
	if (i == input.length())
		return (true);
	return (false);
}

bool Convert::check_float(void)
{
	std::string	input = this->get_str();
	size_t		i = 0;
	int			dot = 0;

	if (this->get_str() == "-inff" || this->get_str() == "+inff" || this->get_str() == "nanf")
		return (true);

	if (input.c_str()[i] == '+' || input.c_str()[i] == '-')
		i++;
	while (i < input.length() - 1)
	{
		if (input.c_str()[i] == '.' && input.c_str()[i + 1] != '\0')
		{
			dot++;
			i++;
		}
		else if (isdigit(input.c_str()[i]))
			i++;
		else
			return (false);
		i++;
	}
	if ((i == input.length() - 1) && input.c_str()[i] == 'f' && dot == 1)
		return (true);
	return (false);
}

bool Convert::check_double(void)
{
	std::string	input = this->get_str();
	size_t		i = 0;
	int			dot = 0;

	if (this->get_str() == "-inf" || this->get_str() == "+inf" || this->get_str() == "nan")
		return (true);

	if (input.c_str()[i] == '+' || input.c_str()[i] == '-')
		i++;
	while (i < input.length())
	{
		if (input.c_str()[i] == '.' && input.c_str()[i + 1] != '\0')
		{
			dot++;
			i++;
		}
		else if (isdigit(input.c_str()[i]))
			i++;
		else
			return (false);
		i++;
	}
	if (i == input.length() && dot == 1)
		return (true);
	return (false);
}

char	Convert::convert_to_char(void)
{
	long double nbr;
	char		*ptr;

	nbr = strtod(this->get_str().c_str(), &ptr);
	if(static_cast<long long>(nbr) > std::numeric_limits<char>::max() || static_cast<long long>(nbr) < std::numeric_limits<char>::min())
		throw ImpossibleException();
	if(std::isinf(nbr) || std::isnan(nbr))
		throw ImpossibleException();
	if (!isprint(this->get_str().c_str()[0]) || (isdigit(this->get_str().c_str()[0]) && this->get_str().length() == 1))
		throw NotDisplayableException();
	return static_cast<char>(nbr);
}

int	Convert::convert_to_int(void)
{
	long double nbr;
	char		*ptr;

	nbr = strtod(this->get_str().c_str(), &ptr);
	if(static_cast<long long>(nbr) > std::numeric_limits<int>::max() || static_cast<long long>(nbr) < std::numeric_limits<int>::min())
		throw ImpossibleException();
	if (std::isinf(nbr) && std::isnan(nbr))
		throw ImpossibleException();
	return static_cast<int>(nbr);
}

float	Convert::convert_to_float(void)
{
	long double nbr;
	char		*ptr;

	nbr = strtod(this->get_str().c_str(), &ptr);
	if (std::isinf(nbr) && std::isnan(nbr))
		throw ImpossibleException();
	return (static_cast<float>(nbr));
}

double	Convert::convert_to_double(void)
{
	long double nbr;
	char		*ptr;

	nbr = strtod(this->get_str().c_str(), &ptr);
	if (std::isinf(nbr) && std::isnan(nbr))
		throw ImpossibleException();
	return (nbr);
}

void	Convert::display(void)
{
	try
	{
		check_input();
	}
	catch (std::exception & e)
	{
		std::cout  << "char : " << e.what() << std::endl;
	}
	try
	{
		char tmp = convert_to_char();
		std::cout << "char : '" << tmp << "'" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "char : " << e.what() << std::endl;
	}
	try
	{
		int tmp = convert_to_int();
		std::cout << "int : " << tmp << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "int : " << e.what() << std::endl;
	}
	try
	{
		float tmp = convert_to_float();
		std::cout.precision(1);
		std::cout << "float : " << std::fixed << tmp << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "float : " << e.what() << std::endl;
	}
	try
	{
		double tmp = convert_to_double();
		std::cout.precision(1);
		std::cout << "double : " << std::fixed << tmp << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "double : " << e.what() << std::endl;
	}
}
