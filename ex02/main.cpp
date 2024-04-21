/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:19:15 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/04 22:36:59 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
	
int main( void )
{
	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                      Subject test                  \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;
	/*//if this comment is uncommented it will throw an error because the class is abstract
	AAnimal animalito;*/
	const AAnimal* j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	const AAnimal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	i->AAnimal::makeSound(); //will output the animal sound!
	delete j;//should not create a leak
	delete i;
	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                      Array tests                      \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;	
	const AAnimal* animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "\033[94m" << animals[i]->getType() << " created \033[0m" << std::endl;
	}
	std::cout << "\033[94m----------------------Deleting-----------------------\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "\033[94mdeleting " << animals[i]->getType() << " \033[0m" << std::endl;
		delete animals[i];
	}
	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                      My tests                      \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << "\033[94m                      My cats                      \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl; 
	Cat cat;
	Cat cat3;
	cat.makeSound();
	Cat cat2(cat);
	cat3 = cat2;
	cat3.makeSound();
	std::cout << "\033[94m                      My dogs                      \033[0m" << std::endl;
    std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
		Dog dog;
	Dog dog3;
	dog.makeSound();
	Dog dog2(dog);
	dog3 = dog2;
	dog3.makeSound();
	std::cout << "\033[94m------------------------------------------------- END\033[0m" << std::endl;
	return 0;
}
