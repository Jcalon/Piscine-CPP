/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:56:23 by jcalon            #+#    #+#             */
/*   Updated: 2022/09/07 18:02:30 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	std::cout << "basic tests" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	Character* john = new Character("JOHN");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	john->equip(tmp);
	tmp = src->createMateria("cure");
	john->equip(tmp);

	std::cout << std::endl << "Deep copy test MateriaSource and Materia" << std::endl << std::endl;
	MateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	MateriaSource* srcCopy = new MateriaSource(*src2);
	delete src2;
	std::cout << std::endl;
	
	std::cout << "full inventory and unequip test" << std::endl << std::endl;
	tmp = srcCopy->createMateria("ice");
	john->equip(tmp);
	AMateria *lastItem = srcCopy->createMateria("cure");
	john->equip(lastItem);
	john->equip(tmp);
	john->unequip(3);
	delete lastItem;
	std::cout << std::endl;

	std::cout << "deep copy test character" << std::endl;
	ICharacter* bob = new Character("BOB");
	Character* johnCopy = new Character(*john);
	delete john;

	johnCopy->use(0, *bob);
	johnCopy->use(1, *bob);
	//empty slot, do nothing:
	johnCopy->use(3, *bob);

	//unkown materia
	tmp = src->createMateria("nectar");

	tmp = src->createMateria("ice");
	johnCopy->equip(tmp);
	johnCopy->use(3, *bob);

	delete bob;
	delete johnCopy;
	delete src;
	delete srcCopy;

	return 0;
}