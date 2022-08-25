/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:53:24 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 13:52:19 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private :

	protected :
		std::string _type;

	public :
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal(std::string type);
		virtual ~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const & rhs);

		void makeSound(void) const;
		std::string getType(void) const;
};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & i);

#endif