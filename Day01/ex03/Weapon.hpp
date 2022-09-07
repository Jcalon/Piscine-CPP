/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:25:46 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/05 15:44:22 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private :
		std::string	_type;

	public :
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		std::string const	&getType(void);
		void				setType(std::string type);
};

#endif