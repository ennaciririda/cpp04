/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:36:59 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/25 04:38:09 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRINGANIMAL_H
#define WRINGANIMAL_H

#include <iostream>

class WrongAnimal
{
	protected :
		std::string type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal& operator=(const WrongAnimal& obj);
		void makeSound() const;
		std::string getType() const ;
		~WrongAnimal();

};

#endif