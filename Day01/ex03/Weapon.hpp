/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:25:46 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 17:44:44 by jcalon           ###   ########.fr       */
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
		Weapon(std::string type);
		~Weapon(void);

		void		setType(std::string type);
		const std::string	&getType(void);
};

#endif