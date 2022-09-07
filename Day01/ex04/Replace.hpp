/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:38:46 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/06 15:59:46 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
	private :
		std::string		_file;
		std::string		_fileReplace;
		std::string		_oldString;
		std::string		_newString;
		std::string		_buffer;
		std::ifstream	_in;
		std::ofstream	_out;
		void			do_replace(void);

	public :
		Replace(std::string name, std::string oldString, std::string newString);
		~Replace(void);

		void	replace_string(void);
};

#endif