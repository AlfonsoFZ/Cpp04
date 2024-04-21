/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:20:28 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/15 22:53:48 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
	
		AMateria* _slots[4];
		std::string _name;
		int _slotsStatus[4]; // 0 = empty, 1 = full, 2 = not learned
		
	public:
		Character( void );
		Character(std::string const & name);
		Character(const Character &other);
		Character & operator=(const Character &other);
		void	printSlots();
		~Character( void );
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif