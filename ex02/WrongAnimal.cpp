/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:54:12 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type("undefined")
{
	if (DEBUG)
		std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal( const WrongAnimal &other )
{	
	if (DEBUG)
		std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = other._type;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &other )
{
	if (DEBUG)
		std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal( void )
{
	if (DEBUG)
		std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
	if (DEBUG)
		std::cout << "WrongAnimal makeSound called" << std::endl;
	std::cout << "undefined wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return this->_type;
}

