/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:32:21 by crazyd            #+#    #+#             */
/*   Updated: 2022/09/10 16:35:18 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class Base { public: virtual ~Base(void){}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	int random_num = rand() % 3;

	if (random_num == 0)
		return (static_cast<Base *>(new A()));
	else if (random_num == 1)
		return (static_cast<Base *>(new B()));
	else
		return (static_cast<Base *>(new C()));
}

void identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
	else
		std::cout << "Wtf is this type ?" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not A" << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not B" << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not C" << std::endl;
	}
}

int	main(void)
{
	std::srand((unsigned int)time(NULL));
	Base *base = generate();
	std::cout << "Identification with pointer : ";
	identify(base);
	std::cout << std::endl;
	std::cout << "Identification with reference : " << std::endl;
	identify(*base);
	delete base;
	return (0);
}