/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/28 15:55:29 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "AAnimal.hpp"
#include "Brain.hpp"

/**
 * @brief rule of three: if you have to define one of them 
 *  you have to define all of them.
 * 	copy constructor, assignment operator and destructor
 */
class Dog : public AAnimal
{
	private:
		Brain* _brain;
		
	public:
		Dog( void );
		Dog( const Dog &otherDog );
		Dog& operator=( const Dog &otherDog );
		~Dog( void );

		void makeSound( void ) const;
};

#endif
