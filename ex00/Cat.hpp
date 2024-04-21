/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/04 21:29:01 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Animal.hpp"

/**
 * @brief Canonical declaration of the Cat class
 * 	copy constructor, assignment operator and destructor
 *  the attribute _type is inherited from the base class Animal 
 */
class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat &otherCat );
		Cat& operator=( const Cat &otherCat );
		~Cat( void );

		void makeSound( void ) const; 
};


#endif
