/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:17 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/27 23:22:57 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE
#define CURE

#include <iostream>
#include "AMateria.hpp"

	class Cure : public AMateria
	{
		public:
			Cure();
			~Cure();
			Cure* clone() const;
			void use(ICharacter& target);
	};
#endif