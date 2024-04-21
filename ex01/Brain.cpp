/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:17:43 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/04 22:18:50 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	if (DEBUG)
		std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Idea content";		
}

Brain::Brain(const Brain &otherBrain)
{
	if (DEBUG)
		std::cout << "Brain copy constructor called" << std::endl;
	*this = otherBrain;
}
Brain& Brain::operator=(const Brain &otherBrain)
{
	if (DEBUG)
		std::cout << "Brain assignation operator called" << std::endl;
	if (this != &otherBrain)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = otherBrain._ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int i) const
{
	return this->_ideas[i];
}
void Brain::setIdea(int i, const std::string idea)
{	
	this->_ideas[i] = idea;
}	

Brain::~Brain()
{
	if (DEBUG)
		std::cout << "Brain destructor called" << std::endl;
}

