/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:53:05 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 13:52:31 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private :

	protected :
		std::string _type;

	public :
		WrongCat(void);
		WrongCat(WrongCat const & src);
		~WrongCat(void);

		WrongCat & operator=(WrongCat const & rhs);

		void makeSound(void) const;
};

#endif