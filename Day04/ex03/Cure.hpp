/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:43:16 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 18:46:46 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria
{
	private :

	public :
		Cure(void);
		Cure(Cure const & src);
		virtual	~Cure(void);
		
		Cure & operator=(Cure const & rhs);

		Cure* clone() const;
		void	use(ICharacter& target);
};

#endif
