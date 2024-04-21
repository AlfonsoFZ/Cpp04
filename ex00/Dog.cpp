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

Dog::Dog( void ) : Animal()
{
	if (DEBUG)
		std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog &other ) : Animal()
{	
	if (DEBUG)
		std::cout << "Dog copy constructor called" << std::endl;
	this->_type = other.getType();
}

Dog& Dog::operator=( const Dog &other )
{
	if (DEBUG)
		std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

Dog::~Dog( void )
{
	if (DEBUG)
		std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	if (DEBUG)
		std::cout << "Dog makeSound called" << std::endl;
	std::cout << "Guau! Guau!" << std::endl;
}

