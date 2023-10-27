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
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	std::cout << "Ice Parametrized Constructor called" << std::endl;
	this->type = "ice";
}

std::string const &Ice::getType() const
{
	return this->type;
}

Ice *Ice::clone() const
{
	Ice *ice = new Ice("ice");
	return ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}
