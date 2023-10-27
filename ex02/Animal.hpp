/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:17:46 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 16:05:02 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal &obj);
		Animal& operator=(const Animal& obj);
		virtual void makeSound() const = 0;
		std::string getType() const ;
		virtual ~Animal();

};

#endif