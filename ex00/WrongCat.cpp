/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:36:57 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 04:40:54 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
	{
		std::cout << "WrongCat copy assignment operator called" << std::endl;
		this->type = obj.type;
	}
	return *this;
}

std::string WrongCat::getType() const
{
	return this->type;
}

void WrongCat::makeSound() const
{
	std::cout << "The " << this->type << " is miaowing" << std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}
