/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/16 20:42:49 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal
{
	protected: 
		std::string _type;
		
	public:
		Animal( void );
		Animal( const Animal &otherAnimal );
		Animal& operator=( const Animal &otherAnimal );
		virtual ~Animal( void );

		virtual void makeSound( void ) const;
		std::string getType( void ) const;
};

/**
 * @brief polimorphism at runtime.
 *  virtual word tells the compiler that the function can be overriden
 * 	by a derived class, and when this function is called from a pointer 
 *  of the base class that point to a derived one, the derived function, if 
 *  it ovewrite the base one will be called.
 *  The destructor should be declared as virtual to be sure that the right 
 *  destructor will be called from the most derived class to the base.
 * 
 * 	if it is not virtual errors appears: deleting object of polymorphic 
 *  class type ‘Animal’ which has non-virtual destructor might 
 *  cause undefined behavior 
 * 
 *  It is important to avoid duplicate attributes in the derived classes,
 *  in my case _type was duplicated in my first drafts and the getType()
 *  was not working as expected.
 */

#endif
