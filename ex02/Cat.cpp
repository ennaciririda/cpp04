/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:55:23 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 02:11:05 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
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
		this->brain = new Brain();
		for (int i = 0; i < 100 ; i++)
			this->brain->ideas[i] = obj.brain->ideas[i];
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
	delete(this->brain);
	return ;
}
