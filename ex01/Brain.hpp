/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:09:37 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/04 22:18:43 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
		
	public:
		Brain();
		Brain(const Brain &otherBrain);
		Brain &operator=(const Brain &otherBrain);
		std::string getIdea(int i) const;
		void setIdea(int i, const std::string idea);
		~Brain();

};
#endif