/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:01:50 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/09 13:30:26 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>

class Brain
{
	private :

	public :
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		std::string _ideas[100];

		Brain & operator=(Brain const & rhs);

};

#endif