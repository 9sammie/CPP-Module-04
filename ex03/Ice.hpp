/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:20:49 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 19:29:45 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Ice {

	private:

	std::string _type;
	
	public:

	Ice(std::string const & type);
	Ice(const Ice&);
	Ice& operator = (const Ice&);
	~Ice();
};

#endif