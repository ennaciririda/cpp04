#include "Ice.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:21 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 18:43:22 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
Ice::Ice() : AMateria()
{
	this->type = "ice";
	// std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(const Ice &obj)
{
	// std::cout << "Ice Copy Constructor called" << std::endl;
	*this = obj;
}

Ice &Ice::operator=(const Ice &obj)
{
	if (this != &obj)
	{
		// std::cout << "Ice copy assignment operator called" << std::endl;
		this->type = obj.type;
	}
	return *this;
}

Ice *Ice::clone() const
{
	Ice *ice = new Ice();
	return ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice Destructor called" << std::endl;
}
