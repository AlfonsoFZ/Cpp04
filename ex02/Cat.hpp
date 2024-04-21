/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/28 15:55:14 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include "AAnimal.hpp"
#include "Brain.hpp"

/**
 * @brief rule of three: if you have to define one of them 
 *  you have to define all of them.
 * 	copy constructor, assignment operator and destructor
 */
class Cat : public AAnimal
{
	private:
		Brain* _brain;
		
	public:
		Cat( void );
		Cat( const Cat &otherCat );
		Cat& operator=( const Cat &otherCat );
		~Cat( void );

		void makeSound( void ) const; 
};


#endif
