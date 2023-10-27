/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:11:05 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/26 22:31:40 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *inventory[4];
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource& operator=(const MateriaSource &obj);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif