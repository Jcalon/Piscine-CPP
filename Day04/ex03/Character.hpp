/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:56:35 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 19:23:09 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
 #define Character_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    private :

        std::string _name;
        AMateria    *_inventory[4];

	public :

		Character(void);
        Character(std::string name);
        Character(Character const & src);
		virtual ~Character();

        Character   &   operator=(Character const & rhs);

		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif