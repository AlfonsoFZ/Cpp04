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

#ifndef CURE_H
#define CURE_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &other);
		Cure & operator=(const Cure &other);
		std::string const & getType() const; //Returns the materia type
		AMateria* clone() const;
		void use(ICharacter& target);
		~Cure();
};

#endif