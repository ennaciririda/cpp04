/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:52:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 16:09:38 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animal[6];
	int i = 0;
	for (i = 0; i < 3; i++)
		animal[i] = new Dog();
	for (i = 3; i < 6; i++)
		animal[i] = new Cat();
	for (i = 0; i < 6; i++)
		delete animal[i];
	return 0;
}