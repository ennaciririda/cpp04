/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:17 by rennacir          #+#    #+#             */
/*   Updated: 2023/10/26 22:41:30 by rennacir         ###   ########.fr       */
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
			Cure(std::string const & type);
			std::string const & getType() const; 
			Cure* clone() const;
			void use(ICharacter& target);
	};
#endif