#include "gclClass.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gclClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:17:45 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/29 15:17:46 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gclClass.hpp"

gclClass::gclClass(AMateria *a)
{

	this->gcl = a;
}

gclClass::~gclClass()
{
	delete this->gcl;
}
