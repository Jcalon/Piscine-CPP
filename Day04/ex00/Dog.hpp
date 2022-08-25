/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:02:43 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 13:35:52 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private :

	protected :
		std::string _type;

	public :
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog & operator=(Dog const & rhs);

		virtual void makeSound(void) const;
};

#endif