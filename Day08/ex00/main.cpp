/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:03:54 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/30 15:16:00 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>
#include <list>

static void vectorTest(void)
{
	std::vector<int> intVector;

	for (int i = 0; i < 10; i++)
		intVector.push_back((i * 10) + i);
		
	std::cout << "intVector: " << std::endl;
	std::vector<int>::iterator arrayIterator = intVector.begin();
	while (arrayIterator != intVector.end())
	{
		std::cout << *arrayIterator << std::endl;
		arrayIterator++;
	}
	std::cout << "easy find 11"  << std::endl;
	try
	{
		std::vector<int>::iterator valueIterator = easyfind(intVector, 11);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intVector.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "easy find 1111"  << std::endl;
	try
	{
		std::vector<int>::iterator valueIterator = easyfind(intVector, 1111);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intVector.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void dequeTest(void)
{
	std::deque<int> intDeque;

	for (int i = 0; i < 10; i++)
		intDeque.push_front(i * i);
		
	std::cout << "intDeque: " << std::endl;
	std::deque<int>::iterator arrayIterator = intDeque.begin();
	while (arrayIterator != intDeque.end())
	{
		std::cout << *arrayIterator << std::endl;
		arrayIterator++;
	}
	std::cout << "easy find 25"  << std::endl;
	try
	{
		std::deque<int>::iterator valueIterator = easyfind(intDeque, 25);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intDeque.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "easy find 1111"  << std::endl;
	try
	{
		std::deque<int>::iterator valueIterator = easyfind(intDeque, 1111);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intDeque.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void listTest(void)
{
	std::list<int> intList;

	for (int i = 0; i < 10; i++)
		intList.push_front(std::rand());
	intList.push_front(22);
	intList.sort();
	std::cout << "intList: " << std::endl;
	std::list<int>::iterator arrayIterator = intList.begin();
	while (arrayIterator != intList.end())
	{
		std::cout << *arrayIterator << std::endl;
		arrayIterator++;
	}
	std::cout << "easy find 22"  << std::endl;
	try
	{
		std::list<int>::iterator valueIterator = easyfind(intList, 22);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intList.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "easy find 1111"  << std::endl;
	try
	{
		std::list<int>::iterator valueIterator = easyfind(intList, 1111);
		std::cout << "found: " << *valueIterator << std::endl;
		std::cout << "at index: " << std::distance(intList.begin(), valueIterator) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	std::cout << "\n-----Vector Test-----\n"  << std::endl;
	vectorTest();
	std::cout << "\n-----Deque Test-----\n"  << std::endl;
	dequeTest();
	std::cout << "\n-----List Test-----\n"  << std::endl;
	listTest();
}