/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:52:25 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/25 18:23:46 by jcalon           ###   ########.fr       */
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

	Dog dog;
	Cat cat;
	Cat catCopy(cat);
	Dog dogCopy(dog);
	cat.getIdea(5);
	catCopy.getIdea(5);
	dog.getIdea(5);
	dogCopy.getIdea(5);

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
		animals[i]->getIdea(5);
		delete animals[i];
	}

	std::cout << "\n\n---------END---------\n\n" << std::endl;
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Animal();
// }