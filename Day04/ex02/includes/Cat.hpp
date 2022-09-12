/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:53:05 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/09 14:23:51 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain	*_brain;

	public :
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat & operator=(Cat const & rhs);

		virtual void makeSound(void) const;
		virtual Brain *getBrain(void) const;
		virtual std::string getIdea(int index);
		virtual std::string getIdea(void);
};

#endif