/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:06:03 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 11:57:14 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private :
		std::string	_name;

	public :
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	anounce(void);
};

Zombie*	newZombie( std::string name );
void 	randomChump( std::string name );

#endif
