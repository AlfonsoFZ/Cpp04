/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 11:46:42 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/31 19:16:07 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "IMateriaSource.hpp"

// class AMateria;

class MateriaSource : public IMateriaSource
{

	private:
		AMateria* _learnedMateria[4];
			
	public:

		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);	
		~MateriaSource();
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};


