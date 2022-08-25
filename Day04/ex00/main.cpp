/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:52:25 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 14:01:10 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat();

	std::cout << std::endl << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << std::endl;

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << std::endl;

	std::cout << l->getType() << " " << std::endl;
	l->makeSound();
	std::cout << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	std::cout << wrongmeta->getType() << " " << std::endl;
	wrongmeta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete wrongmeta;
	delete l;
	delete k;
	delete j;
	delete i;
	return 0;
}