/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:19:15 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/04 21:35:33 by alfofern         ###   ########.fr       */
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
	std::cout << "\033[94m                       Subject test                         \033[0m" << std::endl;
    std::cout << "\033[94m----------------------------------------------------\033[0m" << std::endl << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\033[94m-----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                       My tests                             \033[0m" << std::endl;
    std::cout << "\033[94m----------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m--------------------------------------------------- 1\033[0m" << std::endl;
	std::cout << "\033[94manimal instance with no type: (Animal animal;)\033[0m" << std::endl;
	Animal animal;
	std::cout << "\033[94manimal.makeSound()\033[0m: ";
	animal.makeSound();
	std::cout << "\033[94m--------------------------------------------------- 2\033[0m" << std::endl;
	std::cout << "\033[94mAnimal2 es copia de Animal\033[0m" << std::endl;
	Animal animal2(animal);
	std::cout << "\033[94manimal2.makeSound(): \033[0m";	
	animal2.makeSound();
	std::cout << "\033[94m--------------------------------------------------- 3\033[0m" << std::endl;
	std::cout << "\033[94manimal instance with no type: (Animal animal3;)\033[0m" << std::endl;
	Animal animal3;
	std::cout << "\033[94manimal3.makeSound(): \033[0m";
	animal3.makeSound();
	std::cout << "\033[94m--------------------------------------------------- 4\033[0m" << std::endl;
	std::cout << "\033[94mAnimal3 es = a Animal2\033[0m" << std::endl;
	animal3 = animal2;
	std::cout << "\033[94manimal3.makeSound(): \033[0m";
	animal3.makeSound();
	std::cout << "\033[94m--------------------------------------------------- 5\033[0m" << std::endl;
	std::cout << "\033[94mDog instance: (Dog dog;) \033[0m" << std::endl;
	Dog dog;
	std::cout << "\033[94mdog.makeSound(): \033[0m";
	dog.makeSound();
	std::cout << "\033[94mdog.Animal::makeSound()\033[0m: ";
	dog.Animal::makeSound();
	std::cout << "\033[94m--------------------------------------------------- 6\033[0m" << std::endl;
	std::cout << "\033[94mCat instance: (Cat cat;) \033[0m" << std::endl;
	Cat cat;
	std::cout << "\033[94mcat.makeSound(): \033[0m";
	cat.makeSound();
	std::cout << "\033[94mcat.Animal::makeSound()\033[0m: ";
	cat.Animal::makeSound();
	std::cout << "\033[94m--------------------------------------------------- 7\033[0m" << std::endl;
	std::cout << "\033[94mWrongAnimal\033[0m" << std::endl;
	const WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << "\033[94m------------------------------------------------- END\033[0m" << std::endl;
	return 0;
}
