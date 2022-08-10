/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:38:30 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 19:21:56 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string file, std::string oldString, std::string newString) : _file(file), _oldString(oldString), _newString(newString)
{
	_fileReplace = _file + ".replace";
}

Replace::~Replace(void)
{

}

void      Replace::do_replace(void)
{
	for (size_t i = 0; i != std::string::npos; i = _buffer.find(_oldString, i + 1))
	{
		if (i != std::string::npos && i != 0)
		{
			_buffer.erase(i, _oldString.length());
			_buffer.insert(i, _newString);
		}
	}
}

void	Replace::replace_string(void)
{
	std::string	line;

	if (_newString.length() == 0 || _oldString.length() == 0 || _file.length() == 0)
		std::cout << "One argument is empty" << std::endl;
	_in.open(_file);
	if (!_in)
	{
		std::cout << "Error opening the input file" << std::endl;
		return ;
	}
	while (getline(_in, line))
	{
		_buffer += line;
		if (!_in.eof())
			_buffer += "\n";
	}
	_in.close();
	do_replace();
	_out.open(_fileReplace);
	if (!_out)
	{
		std::cout << "Error opening the output file" << std::endl;
		return ;
	}
	_out << _buffer;
	_out.close();
}