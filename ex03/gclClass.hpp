/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gclClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:16:45 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/29 15:22:47 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GCLCLASS_H
#define GCLCLASS_H

#include "AMateria.hpp"

class gclClass
{
private:
	AMateria *gcl;
public:
	gclClass(AMateria *a);
	~gclClass();
};

#endif