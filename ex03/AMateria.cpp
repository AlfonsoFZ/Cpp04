/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:00:32 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/05 19:28:39 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &other) 
{
	//std::cout << "AMateria copy constructor called" << std::endl;
	this->_type = other._type;
}

/*
	it does not make sense to create an AMateria with a type, since it is an abstract 
	class and all the derived class will initiate their type upon construction and they
	have their own asigment operator and copy constructor.
	
	I leave it this way just in case.
*/
AMateria& AMateria::operator= (const AMateria &other)
{	
	//std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	//std::cout << "AMateria use called" << std::endl;
}

std::string const & AMateria::getType() const 
{
	return this->_type;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called" << std::endl;
}