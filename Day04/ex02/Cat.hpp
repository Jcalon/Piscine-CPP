/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:53:05 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 17:00:38 by jcalon           ###   ########.fr       */
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

	protected :
		std::string _type;

	public :
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat & operator=(Cat const & rhs);

		virtual void makeSound(void) const;
		virtual Brain *getBrain(void) const;
		virtual void getIdeas(void);
		virtual void getIdea(int index);
};

#endif