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

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	//std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &other): AMateria()
{
	//std::cout << "Cure copy constructor called" << std::endl;
	this->_type = other._type;
}

Cure & Cure::operator=(const Cure &other)
{
	//std::cout << "Cure assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria* Cure::clone() const
{
	//std::cout << "Cure clone called" << std::endl;
	Cure *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}


Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}
