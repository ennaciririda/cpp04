#include "Dog.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:29:57 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/22 19:29:58 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		std::cout << "Dog copy assignment operator called" << std::endl;
		this->type = obj.type;
		this->brain = new Brain();
		for (int i = 0; i < 100 ; i++)
			this->brain->ideas[i] = obj.brain->ideas[i];
	}
	return *this;
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::makeSound() const
{
	std::cout << "the " << this->type << " is barking" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete(this->brain);
	return ;
}

