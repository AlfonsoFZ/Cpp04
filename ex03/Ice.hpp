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

#ifndef ICE_H
#define ICE_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);
		Ice & operator=(const Ice &other);
		std::string const & getType() const; //Returns the materia type
		AMateria* clone() const;
		void use(ICharacter& target);
		~Ice();
};

#endif