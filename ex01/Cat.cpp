/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:54:12 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal()
{
	if (DEBUG)
		std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}
Cat::Cat( const Cat &other ) : Animal()
{	
	if (DEBUG)
		std::cout << "Cat copy constructor called" << std::endl;
	this->_type = other.getType();
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=( const Cat &other )
{
	if (DEBUG)
		std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other.getType();
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat( void )
{
	if (DEBUG)
		std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void Cat::printFirstBrainIdea( void )
{
	if (DEBUG)
		std::cout << "Cat printFirstBrainIdea called" << std::endl;
	std::cout << this->_brain->getIdea(0) << std::endl;
}


void Cat::makeIdea( int i, std::string idea)
{
	if (DEBUG)
		std::cout << "Cat makeIdea called" << std::endl;
	this->_brain->setIdea(i, idea);

}


void Cat::makeSound( void ) const
{
	if (DEBUG)
		std::cout << "Cat makeSound called" << std::endl;
	std::cout << "Miau!" << std::endl;
}
