/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:29:55 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/24 15:58:47 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(const Dog &obj);
		Dog& operator=(const Dog& obj);
		std::string getType() const ;
		void makeSound() const;
		~Dog();
};
#endif