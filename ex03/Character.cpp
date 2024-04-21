/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:20:28 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/16 20:49:59 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	//std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_slots[i] = NULL;
		_slotsStatus[i] = 2;
	}
	
}

Character::Character(std::string const & name): _name(name)
{
	//std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_slots[i] = 0;
		_slotsStatus[i] = 2;

	}
}
Character::Character(const Character &other): _name(other._name)
{
	// std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._slotsStatus[i] != 2)
		{
			_slotsStatus[i] = other._slotsStatus[i];
			_slots[i] = other._slots[i]->clone();
		}
		else
		{
			_slots[i] = 0;
			_slotsStatus[i] = 2;
		}
	}
}
Character & Character::operator=(const Character &other)
{
	// std::cout << "Character assignation operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_slotsStatus[i] != 2)
				delete _slots[i];
			_slots[i] = other._slots[i]->clone();
			_slotsStatus[i] = other._slotsStatus[i];
		}
	}
	return *this;
}

Character::~Character( void )
{
	// std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_slotsStatus[i] != 2)
			delete _slots[i];
	}
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	//std::cout << "Equip called" << std::endl;
	if (!m)
	{
		std::cout << "Materia is NULL, please use a valid AMateria *" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_slotsStatus[i] == 1)
		{
			delete _slots[i];
			_slots[i] = m;
			_slotsStatus[i] = 0;
			return;
		}
		else if (_slotsStatus[i] == 2)
		{
			_slots[i] = m;
			_slotsStatus[i] = 0;
			return;
		}
	}
	delete m;
	std::cout << "No space available - materia has been destroyed" << std::endl;
}
void Character::unequip(int idx)
{
	//std::cout << "Unequip called" << std::endl;
	if (idx >= 0 && idx < 4 && _slotsStatus[idx] == 0)
		_slotsStatus[idx] = 1;
	else
		std::cout << "idx out of range or no materia to unequip." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	//std::cout << "Character Use called" << std::endl;
	if ((idx >= 0 && idx < 4) && (this->_slotsStatus[idx] == 0))
	{
		this->_slots[idx]->use(target);
		return;
	}
	std::cout << "idx out of range or no materia to use." << std::endl;
}

void Character::printSlots()
{
	for (int i = 0; i < 4; i++)
	{
		
		std::cout << "in memory position: "<< &_slots[i];
		if (_slots[i] && _slotsStatus[i] == 0)
			std::cout << "; type saved: "<< _slots[i]->getType() << std::endl;
		else
			std::cout << "no type saved" << std::endl;
	}
}