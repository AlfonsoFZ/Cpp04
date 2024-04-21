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

Cat::Cat( void ) : Animal()
{
	if (DEBUG)
		std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}
Cat::Cat( const Cat &other ) : Animal()
{	
	if (DEBUG)
		std::cout << "Cat copy constructor called" << std::endl;
	this->_type = other.getType();
}

Cat& Cat::operator=( const Cat &other )
{
	if (DEBUG)
		std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

Cat::~Cat( void )
{
	if (DEBUG)
		std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
	if (DEBUG)
		std::cout << "Cat makeSound called" << std::endl;
	std::cout << "Miau!" << std::endl;
}
