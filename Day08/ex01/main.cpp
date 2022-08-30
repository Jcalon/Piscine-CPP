/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:21:08 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/30 17:43:37 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void addNumber(Span &sp, int n)
{
	try
	{
		sp.addNumber(std::rand() % n);
	}
	catch (std::exception &e)
	{
		addNumber(sp, n);
	}
}

int main()
{
	int n = 10000;
	Span sp = Span(n);

	std::srand(time(0));
	for (int i = 0; i < n; i++)
		addNumber(sp, n * 10);
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	sp.addNumber(v.begin(), v.end());
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}