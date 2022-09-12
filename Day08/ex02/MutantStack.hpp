/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:46:53 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/12 12:36:19 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	private:

	public:
		MutantStack(void) {};
		MutantStack(MutantStack const *src) : std::stack<T, Container>(src){};
		~MutantStack(void) {};
		MutantStack &operator=(MutantStack const &rhs)
		{
			std::stack<T, Container>::operator=(rhs);
			return *this;
		};

		typedef typename Container::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		};
		iterator end()
		{
			return this->c.end();
		};
		typedef typename Container::const_iterator const_iterator;
		const_iterator begin() const
		{
			return this->c.begin();
		};
		const_iterator end() const
		{
			return this->c.end();
		};
		typedef typename Container::reverse_iterator reverse_iterator;
		reverse_iterator rbegin()
		{
			return this->c.rbegin();
		};
		reverse_iterator rend()
		{
			return this->c.rend();
		};
		typedef typename Container::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const
		{
			return this->c.rbegin();
		};
		const_reverse_iterator rend() const
		{
			return this->c.rend();
		};
};

#endif