/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WongCat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/27 20:56:34 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	if (DEBUG)
		std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}
WrongCat::WrongCat( const WrongCat &other ) : WrongAnimal()
{	
	if (DEBUG)
		std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = other.getType();
}

WrongCat& WrongCat::operator=( const WrongCat &other )
{
	if (DEBUG)
		std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

WrongCat::~WrongCat( void )
{
	if (DEBUG)
		std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	if (DEBUG)
		std::cout << "WrongCat makeSound called" << std::endl;
	std::cout << "Wrong Miau!" << std::endl;
}
