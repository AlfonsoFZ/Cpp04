/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 11:46:42 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/31 19:17:31 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		_learnedMateria[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for(int i = 0; i < 4; i++)
			delete (_learnedMateria[i]);
		for(int i = 0; i < 4; i++)
			this->_learnedMateria[i] = other._learnedMateria[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _learnedMateria[i];
}
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learnedMateria[i] == NULL)
		{
			_learnedMateria[i] = m;
			return;
		}
	}
	delete m;
	std::cout << "I have already learnt 4 materias." << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	// AMateria *clone = 0;
	for (int i = 0; i < 4; i++)
	{
		if ((_learnedMateria[i] != NULL) && (_learnedMateria[i]->getType() == type))
			return _learnedMateria[i]->clone();
	}
	std::cout << "I have not learnt how to create this materia." << std::endl;
	return 0;
}
