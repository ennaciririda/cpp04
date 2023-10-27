#include "Character.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:25:16 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 21:25:17 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(std::string name)
{
	std::cout << "Character Parametrized Constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4 ; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &obj)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = obj;
}


Character &Character::operator=(const Character &obj)
{

	if (this != &obj)
	{
		std::cout << "Character copy assignment operator called" << std::endl;
		this->name = obj.name;
		for (int i = 0; i < 4 ; i++)
			this->inventory[i] = obj.inventory[i];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && this->inventory[i] != NULL)
		{
			this->inventory[i] = NULL;
			break;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && this->inventory[i])
			this->inventory[i]->use(target);
	}
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}