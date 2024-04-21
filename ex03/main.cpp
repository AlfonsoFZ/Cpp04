/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:19:15 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/16 20:55:04 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
// #include "IMateriaSource.hpp"

int main( void )
{
	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                      Subject test                   \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                      My tests                       \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;
	me->unequip(0);
	delete bob;
	delete me;
	delete src;
	src = new MateriaSource();
	std::cout << "\033[94mmore than 4 materias to learn: \033[0m" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	me = new Character("me");
	std::cout << "\033[94m----------------------------------------------------- 2\033[0m" << std::endl;
	std::cout << "\033[94mCreating a wrong type materia: \033[0m" << std::endl;
	tmp = src->createMateria("Ice");
	std::cout << "\033[94m----------------------------------------------------- 3\033[0m" << std::endl;
	std::cout << "\033[94mEquipping a null materia:\033[0m" << std::endl;
	me->equip(tmp);
	std::cout << "\033[94m----------------------------------------------------- 4\033[0m" << std::endl;
	std::cout << "\033[94mCreating materias:\033[0m" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	static_cast<Character*>(me)->printSlots();
	std::cout << "\033[94m----------------------------------------------------- 5\033[0m" << std::endl;
	std::cout << "\033[94mEquipping a fifth materia:\033[0m" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "\033[94m----------------------------------------------------- 6\033[0m" << std::endl;
	std::cout << "\033[94mUnequipping: - run valgrind ./a.out to check leaks  - \033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		me->unequip(i);
	std::cout << "\033[94mUnequipping an unequipped material                  - \033[0m" << std::endl;
	me->unequip(0);
	std::cout << "\033[94mUsing an unequipped material                        - \033[0m" << std::endl;
	me->use(0, *bob);
	std::cout << "\033[94m----------------------------------------------------- 7\033[0m" << std::endl;
	AMateria* tmp2 = src->createMateria("ice");
	AMateria* tmp3;
	tmp3 = tmp2;
	std::cout << tmp3->getType() << std::endl;
	delete tmp3;
	delete me;
	delete src;
	std::cout << "\033[94m----------------------------------------------------- \033[0m" << std::endl;
	std::cout << "\033[94m                   Deep copy test                    8\033[0m" << std::endl;
	std::cout << "\033[94m----------------------------------------------------- \033[0m" << std::endl;
	std::cout << "\033[94m- Original instanciated, 4 Ice materia are equipped - \033[0m" << std::endl;
	Character original("Original"); // Create un instance of Character
	original.equip(new Ice()); // equip materia
	original.equip(new Ice());
	original.equip(new Ice());
	original.equip(new Ice());
	original.printSlots();	//print the slots
	std::cout << "\033[94m---Copy is copy of Original, 4 Ice materia equipped--- \033[0m" << std::endl;
	Character copy (original);
	copy.printSlots();
	std::cout << "\033[94m--         Original unequiped first 3 slots         -- \033[0m" << std::endl;
	original.unequip(0);
	original.unequip(1);
	original.unequip(2);
	original.printSlots();
	std::cout << "\033[94m--         Copy:                                    -- \033[0m" << std::endl;
	copy.printSlots();
	std::cout << "\033[94m----------------------------------------------------- \033[0m" << std::endl;
	std::cout << "\033[94m                  asignation test                     9\033[0m" << std::endl;
	std::cout << "\033[94m----------------------------------------------------- \033[0m" << std::endl;
	std::cout << "\033[94m--Original2 instanciated and 4 Ice materia equipped-- \033[0m" << std::endl;
	Character original2("Original2");
	original2.equip(new Ice());
	original2.equip(new Ice());
	original2.equip(new Ice());
	original2.equip(new Ice());
	original2.printSlots();
	std::cout << "\033[94m--asignated = Original2, with 4 Ice materia equipped--\033[0m" << std::endl;
	Character asignated = original2;
	std::cout << "\033[94m--         Original unequiped first 3 slots         -- \033[0m" << std::endl;
	original2.unequip(0);
	original2.unequip(1);
	original2.unequip(2);
	original2.printSlots();
	std::cout << "\033[94m--asignated with their copied 4 Ice materia equipped--\033[0m" << std::endl;
	asignated.printSlots();
	std::cout << "\033[94m-------------------------------------------------- END\033[0m" << std::endl;
	
	return 0;
}