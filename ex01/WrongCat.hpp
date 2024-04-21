/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/27 20:55:50 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H
#include <iostream>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat &otherCat );
		WrongCat& operator=( const WrongCat &otherCat );
		~WrongCat( void );

		void makeSound( void ) const; 
};

#endif
