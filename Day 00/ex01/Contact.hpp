/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:05:53 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 12:25:10 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class Contact {
	private :
		int	_index;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public :
		Contact(void);
		~Contact(void);
		void	create_contact(int);
		void	display_contact(void);
		void	display_infos(void);
};

#endif