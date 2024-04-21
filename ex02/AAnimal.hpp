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

#ifndef AANIMAL_H
#define AANIMAL_H
#include <string>
#include <iostream>

class AAnimal
{
	protected: 
		std::string _type;

	public:
		AAnimal( void );
		AAnimal( const AAnimal &otherAAnimal );
		AAnimal& operator=( const AAnimal &otherAAnimal );
		virtual ~AAnimal( void );

		virtual void makeSound( void ) const = 0;
		std::string getType( void ) const;
};

/**
 * @brief polimorphism at runtime.
 *  virtual word tells the compile that the function can be overriden
 * 	by a derived class, and that this function can be called from a pointer 
 *  of the base class that will search teh value from th derived class to the base
 * 	using tho most derived class.
 *  The destructor should be declared as virtual to be sure that the right destructor
 *  its called from the most derived class.
 * 
 *  It is important to avoid duplicate attributes in the derived classes. 
 *  in this case the _type was duplicated in the previous test and the getType()
 *  did not work as expected.
 * 
 *  in this case to convert this class in an abstract class we need to declare at least 
 * 	one pure virtual function (adding = 0 at the end).
 *  this class cannot be instantiated directly.
 */

#endif
