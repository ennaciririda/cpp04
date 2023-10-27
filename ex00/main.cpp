/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:52:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 04:45:19 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete (meta);
	delete (i);
	delete (j);
	std::cout << "****************Tests for Wrong Animal****************" << std::endl;
	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* i1 = new WrongCat();
	std::cout << meta1->getType() << " " << std::endl;
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound();
	meta1->makeSound();
	delete(i1);
	delete(meta1);
	return 0;
}