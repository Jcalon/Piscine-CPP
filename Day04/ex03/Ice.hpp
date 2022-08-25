/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:40:23 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 18:50:47 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
	private :

	public :
		Ice(void);
		Ice(Ice const & src);
		virtual	~Ice(void);
		
		Ice & operator=(Ice const & rhs);

		Ice* clone() const;
		void	use(ICharacter& target);
};

#endif
