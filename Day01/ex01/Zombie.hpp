/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:06:03 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 17:08:06 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <iomanip>

class Zombie
{
	private :
		std::string	_name;

	public :
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void		anounce(void);
		void		setName(std::string name);
		std::string	getName(void);
};

Zombie*	zombieHorde( int N, std::string name );

#endif