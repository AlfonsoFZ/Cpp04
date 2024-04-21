/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:54:12 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): _type("undefined")
{
	if (DEBUG)
		std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal( const Animal &other )
{	
	if (DEBUG)
		std::cout << "Animal copy constructor called" << std::endl;
	this->_type = other._type;
}

Animal& Animal::operator=( const Animal &other )
{
	if (DEBUG)
		std::cout << "Animal assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Animal::~Animal( void )
{
	if (DEBUG)
		std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound( void ) const
{
	if (DEBUG)
		std::cout << "Animal makeSound called" << std::endl;
	std::cout << "undefined animal sound" << std::endl;
}

std::string Animal::getType( void ) const
{
	return this->_type;
}

