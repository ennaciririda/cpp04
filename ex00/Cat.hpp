/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:54:46 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 01:52:27 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat &obj);
		Cat& operator=(const Cat& obj);
		std::string getType() const;
		void makeSound() const;
		~Cat();
};
#endif