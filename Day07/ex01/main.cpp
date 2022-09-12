/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:57:08 by crazyd            #+#    #+#             */
/*   Updated: 2022/09/09 17:02:47 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
// 	public: 
// 		Awesome( void ): _n(42) { return; }
// 		int get( void ) const { return this->_n; }
	
// 	private:
// 		int _n;
// };
// std::ostream &operator<<(std::ostream &o, const Awesome &i) { o << i.get(); return o; }

int	main(void)
{
	std::string	str[] = {"Salut, ", "ça ", "va ", "bien?"};
	int			tab[] = {1, 2, 3, 4, 5};
	// Awesome		tab2[5];
	
	// iter(tab2, 5, print);

	iter(str, 4, &print);
	iter(tab, 5, &print);

	iter(str, 3, &print);
	iter(tab, 4, &print);
	return (0);
}