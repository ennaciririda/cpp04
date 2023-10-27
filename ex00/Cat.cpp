/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:55:23 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 01:52:25 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		std::cout << "Cat copy assignment operator called" << std::endl;
		this->type = obj.type;
	}
	return *this;
}

std::string Cat::getType() const
{
	return this->type;
}

void Cat::makeSound() const
{
	std::cout << "The " << this->type << " is miaowing" << std::endl;
}


Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}
