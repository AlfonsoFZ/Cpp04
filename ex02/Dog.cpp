/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:54:12 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal()
{
	if (DEBUG)
		std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();

}

Dog::Dog( const Dog &other ) : AAnimal()
{	
	if (DEBUG)
		std::cout << "Dog copy constructor called" << std::endl;
	this->_type = other.getType();
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=( const Dog &other )
{
	if (DEBUG)
		std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other.getType();
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::~Dog( void )
{
	if (DEBUG)
		std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound( void ) const
{
	if (DEBUG)
		std::cout << "Dog makeSound called" << std::endl;
	std::cout << "Guau! Guau!" << std::endl;
}

