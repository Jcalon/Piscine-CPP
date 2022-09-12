/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:02:43 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/09 14:24:08 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private :

	public :
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog & operator=(Dog const & rhs);

		virtual void makeSound(void) const;
};

#endif