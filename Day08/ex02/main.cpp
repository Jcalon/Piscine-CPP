/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:44:14 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/12 12:38:41 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << std::endl << "----------------------TEST STACK----------------------" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "Pushing 5 and 17" << std::endl;
	std::cout << "Top : " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Poping" << std::endl;
	std::cout << "Size after pop : " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Pushing 3, 5, 737, 0" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	std::cout << "Printing : " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl << "----------------------TEST WITH LIST----------------------" << std::endl;
	std::stack<int> s(mstack);
	{
		std::list<int> mstack;
		
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "Pushing back 5 and 17" << std::endl;
		std::cout << "Top : " << mstack.back() << std::endl;

		mstack.pop_back();
		std::cout << "Poping back" << std::endl;
		std::cout << "Size after pop : " << mstack.size() << std::endl;
		
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::cout << "Pushing 3, 5, 737, 0" << std::endl;

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << "----------------------TEST WITH LIST COPY AND REVERSE----------------------" << std::endl;
	{
		MutantStack<int, std::list<int> > mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "Pushing 5 and 17" << std::endl;
		std::cout << "top: " << mstack.top() << std::endl;

		mstack.pop();
		std::cout << "Poping" << std::endl;
		std::cout << "Size after pop : " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		std::cout << "Pushing 3, 5, 737, 0" << std::endl;

		MutantStack<int, std::list<int> >::iterator it = mstack.begin();
		MutantStack<int, std::list<int> >::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "Printing : " << std::endl;
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Copying : " << std::endl;
		std::stack<int, std::list<int> > s(mstack);

		std::cout << "copy size: " << s.size() << std::endl;
		std::cout << "original size: "<< mstack.size() << std::endl;

		MutantStack<int, std::list<int> >::reverse_iterator it_reverse = mstack.rbegin();
		MutantStack<int, std::list<int> >::reverse_iterator ite_reverse = mstack.rend();
		std::cout << "Printing reverse : " << std::endl;
		while(it_reverse != ite_reverse)
		{
			std::cout << *it_reverse<< std::endl;
			++it_reverse;
		}
	}
	return 0;
}