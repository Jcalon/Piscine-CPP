/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:32:42 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 17:41:50 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private :
		std::string	_name;
		Weapon		&_weapon;

	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);
};

#endif