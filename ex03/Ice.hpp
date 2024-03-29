/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:23 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/29 15:57:51 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
#define ICE

#include <iostream>
#include "AMateria.hpp"

	class Ice : public AMateria
	{
		public:
			Ice();
			Ice(const Ice &obj);
			Ice& operator=(const Ice &obj);
			Ice* clone() const;
			void use(ICharacter& target);
			~Ice();
	};
#endif