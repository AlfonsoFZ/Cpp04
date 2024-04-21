/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:54:12 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ): _type("undefined")
{
	if (DEBUG)
		std::cout << "AAnimal default constructor called" << std::endl;
}
AAnimal::AAnimal( const AAnimal &other )
{	
	if (DEBUG)
		std::cout << "AAnimal copy constructor called" << std::endl;
	this->_type = other._type;
}

AAnimal& AAnimal::operator=( const AAnimal &other )
{
	if (DEBUG)
		std::cout << "AAnimal assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AAnimal::~AAnimal( void )
{
	if (DEBUG)
		std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound( void ) const
{
	if (DEBUG)
		std::cout << "AAnimal makeSound called" << std::endl;
	std::cout << "undefined animal sound" << std::endl;
}

std::string AAnimal::getType( void ) const
{
	return this->_type;
}

