/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/28 15:54:21 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	//std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &other): AMateria()
{
	//std::cout << "Ice copy constructor called" << std::endl;
	this->_type = other._type;
}

Ice & Ice::operator=(const Ice &other)
{
	//std::cout << "Ice assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria* Ice::clone() const
{
	//std::cout << "Ice clone called" << std::endl;
	Ice *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


Ice::~Ice()
{
	//std::cout << "Ice destructor called" << std::endl;
}
