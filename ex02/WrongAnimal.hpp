/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/27 20:57:10 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
	protected: 
		std::string _type;

	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &otherWrongAnimal );
		WrongAnimal& operator=( const WrongAnimal &otherWrongAnimal );
		~WrongAnimal( void );

		void makeSound( void ) const;
		std::string getType( void ) const;
};

#endif
