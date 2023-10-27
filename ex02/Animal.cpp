#include "Animal.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:20:45 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/22 19:20:46 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj)
	{
		std::cout << "Animal copy assignment operator called" << std::endl;
		type = obj.type;
	}
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
	return;
}
