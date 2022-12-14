/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:02:43 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/09 14:24:01 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private :
		Brain *_brain;

	public :
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);

		Dog & operator=(Dog const & rhs);

		virtual void makeSound(void) const;
		Brain *getBrain(void) const;
		virtual std::string getIdea(int index);
		virtual std::string getIdea(void);
};

#endif