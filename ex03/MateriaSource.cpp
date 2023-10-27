/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:10:59 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/28 00:54:35 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource Default Constructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		this->inventory[i] = NULL;
}


MateriaSource::MateriaSource(const MateriaSource &obj)
{
	// std::cout << "MateriaSource Copy Constructor called" << std::endl;
	*this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		// std::cout << "MateriaSource Copy assignemnt operator called" << std::endl;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = obj.inventory[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] && this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	}
	return nullptr;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource Destructor called" << std::endl;
}