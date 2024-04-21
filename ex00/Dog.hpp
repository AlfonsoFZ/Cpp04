/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/04 21:29:16 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.hpp"

/**
 * @brief rule of three: if you have to define one of them 
 *  you have to define all of them.
 * 	copy constructor, assignment operator and destructor
 *  the attribute _type is inherited from the base class Animal 
 */
class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog &otherDog );
		Dog& operator=( const Dog &otherDog );
		~Dog( void );

		void makeSound( void ) const;
};

#endif
