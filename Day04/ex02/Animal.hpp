/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:53:24 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 18:24:15 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	private :

	protected :
		std::string _type;

	public :
		Animal(void);
		Animal(Animal const & src);
		Animal(std::string type);
		virtual ~Animal(void);

		Animal & operator=(Animal const & rhs);

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		virtual void getIdeas(void);
		virtual void getIdea(int index);

};

std::ostream & operator<<(std::ostream & o, Animal const & i);

#endif