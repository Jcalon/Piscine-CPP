/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:32:51 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 19:42:11 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
 #define MateriaSource_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private :

        std::string _name;
        AMateria    *_inventory[4];

	public :

		MateriaSource(void);
        MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();

        MateriaSource   &   operator=(MateriaSource const & rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif