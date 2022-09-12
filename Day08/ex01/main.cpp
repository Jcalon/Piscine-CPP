/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:21:08 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/11 19:31:07 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
static void tryShortestSpan(Span &span)
{
	try
	{
		std::cout << span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void tryLongestSpan(Span &span)
{
	try
	{
		std::cout << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void simpleTest(void)
{
	Span sp = Span(5);
	sp.addNumber(-6);
	sp.addNumber(3);
	sp.addNumber(19);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(11);
	sp.addNumber(11);
	sp.addNumber(11);
	sp.addNumber(11);
	sp.addNumber(11);
	sp.addNumber(11);
	sp.addNumber(11);
	
	tryShortestSpan(sp);
	tryLongestSpan(sp);
}

static void bigSpanTest(void)
{
	Span bigSp = Span(5000);
	for (int i = 0; i < 5000; i++)
	{
		bigSp.addNumber(rand());
	}
	bigSp.addNumber(42);

	tryShortestSpan(bigSp);
	tryLongestSpan(bigSp);
}

static void iteratorTest(void)
{
	Span  itSp = Span(30);
	std::vector<int> itVector;

	for (int i = 0; i < 15; i++)
	{
		itSp.addNumber(i + 10);
		itVector.push_back(i * i);
	}

	std::vector<int>::iterator v_beging = itVector.begin();
	std::vector<int>::iterator v_end = itVector.end() - 1;

	itSp.addNumber(v_beging, v_end);
	
	tryShortestSpan(itSp);
	tryLongestSpan(itSp);

	itSp.addNumber(v_beging, v_end);
}

static void shortSpanTest(void)
{
	Span noSp(0);
	Span littleSp(3);

	littleSp.addNumber(1);
	tryShortestSpan(noSp);
	tryLongestSpan(noSp);
	tryShortestSpan(littleSp);
	tryLongestSpan(littleSp);
}

static void deepCopyTest(void)
{
	Span *originalSp = new Span(5);

	for (int i = 0; i < 4; i++)
		originalSp->addNumber((1000 * i));

	std::cout << "originalSp shortestSpan: " << std::endl;
	tryShortestSpan(*originalSp);
	std::cout << "originalSp longestSpan: " << std::endl;
	tryLongestSpan(*originalSp);

	Span *copySp = new Span(*originalSp);

	std::cout << "\ncopySp shortestSpan: " << std::endl;
	tryShortestSpan(*copySp);
	std::cout << "copySp longestSpan: " << std::endl;
	tryLongestSpan(*copySp);

	originalSp->addNumber(1);
	std::cout << "\noriginalSp new shortestSpan: " << std::endl;
	tryShortestSpan(*originalSp);
	delete originalSp;

	std::cout << "copySp shortestSpan: " << std::endl;
	tryShortestSpan(*copySp);

	std::cout << "copySp longestSpan: " << std::endl;
	tryLongestSpan(*copySp);
	
	delete copySp;
}

int main(void)
{
	std::srand((unsigned int)time(NULL));
	std::cout << "\n----SIMPLE TEST----\n" << std::endl;
	simpleTest();
	std::cout << "\n----BIG SPAN TEST----\n" << std::endl;
	bigSpanTest();
	std::cout << "\n----ITERATOR TEST----\n" << std::endl;
	iteratorTest();
	std::cout << "\n----SHORT SPAN TEST----\n" << std::endl;
	shortSpanTest();
	std::cout << "\n----DEEP COPY TEST----\n" << std::endl;
	deepCopyTest();
}
