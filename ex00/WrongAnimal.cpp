/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:37:01 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 04:46:53 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Animal ou sf";
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
	{
		std::cout << "WrongAnimal copy assignment operator called" << std::endl;
		type = obj.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "the WrongAnimal is an WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return;
}
