/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:07:19 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 12:57:39 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private :
		static int 	_nbContacts;
		Contact _contacts[8];
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void add_contact(void);
		void search_contact(void);
};

#endif