/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:52:25 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 17:17:18 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;
// 	delete i;

// 	return 0;
// }

int main(void)
{
	std::cout << "\n\n---------HEAP TEST---------\n\n" << std::endl;

	const Animal* heapDog = new Dog();
	const Animal* heapCat = new Cat();
	delete heapDog;
	delete heapCat;

	std::cout << "\n\n---------STACK + DEEP TEST---------\n\n" << std::endl;

	Animal test;
	Dog dog;
	Cat cat;
	Dog dogCopy(dog);
	Cat catCopy(cat);
	std::cout << cat.getIdea(5) << std::endl;
	std::cout << catCopy.getIdea(5) << std::endl;
	std::cout << dog.getIdea(5) << std::endl;
	std::cout << dogCopy.getIdea(5) << std::endl;

	std::cout << "\n\n---------ARRAY TEST---------\n\n" << std::endl;

	Animal *animals[4];
	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	for(int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		std::cout << animals[i]->getIdea(10) << std::endl;
		delete animals[i];
	}

	std::cout << "\n\n---------END---------\n\n" << std::endl;
}