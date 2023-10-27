/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:19 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/26 15:05:44 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	std::cout << "Cure Default Constructor called" << std::endl;
}


Cure::Cure(std::string const &type) : AMateria(type)
{
	std::cout << "Cure Parametrized Constructor called" << std::endl;
	this->type = "cure";
}

std::string const &Cure::getType() const
{
	return this->type;
}

Cure *Cure::clone() const
{
	Cure *cure = new Cure("cure");
	return cure;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}