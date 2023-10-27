/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:23 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/27 23:22:04 by rennacir         ###   ########.fr       */
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
			Ice* clone() const;
			void use(ICharacter& target);
			~Ice();
	};
#endif