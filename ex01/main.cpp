/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:19:15 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/16 20:13:19 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
	
int main( void )
{
	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                       Subject test                  \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;
	const Animal* j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	delete j;//should not create a leak
	delete i;
	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                    Array tests                      \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;	
	const Animal* animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "\033[94m" << animals[i]->getType() << " created \033[0m" << std::endl;
	}
	std::cout << "\033[94m-----------------Deleting----------------------------\033[0m" << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "\033[94mdeleting " << animals[i]->getType() << " \033[0m" << std::endl;
		delete animals[i];
	}
	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                       My tests                      \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;
	Cat cat;
	Dog dog;
	Cat cat3;
	cat.makeSound();
	Cat cat2(cat);
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << "\033[94mcat3 = cat2:\033[0m" << std::endl;
	cat3 = cat2;
	std::cout << "\033[94mcat2 first idea changed to \"I am a cat\" \033[0m" << std::endl;
	cat2.makeIdea(0, "I am a cat");
	std::cout << "cat2 first idea: ";
	cat2.printFirstBrainIdea();
	std::cout << std::endl << "cat3 first idea: ";
	cat3.printFirstBrainIdea();
	std::cout << std::endl << "\033[94m------------------------------------------------- END\033[0m" << std::endl;
	Dog basic;
	{
	Dog tmp = basic;
	}
	std::cout << std::endl << "\033[94m------------------------------------------------- END\033[0m" << std::endl;
	return 0;
}
