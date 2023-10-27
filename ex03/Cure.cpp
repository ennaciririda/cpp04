/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:19 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/27 23:31:34 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	// std::cout << "Cure Default Constructor called" << std::endl;
	this->type = "cure";
}

Cure *Cure::clone() const
{
	Cure *cure = new Cure();
	return cure;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure Destructor called" << std::endl;
}