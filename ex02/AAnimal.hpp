/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:55:24 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 19:27:37 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define STD			"\033[0m"
#define BLUE		"\033[38;5;44m\033[48;5;159m"
#define GREEN		"\033[38;5;34m\033[48;5;193m"
#define PINK		"\033[38;5;199m\033[48;5;225m"
#define GREYBGBOLD	"\033[48;5;237m\033[1m"

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal {

	protected:
	std::string _type;
	Brain* _brain;

	public:
	AAnimal();
	AAnimal(std::string name);
	AAnimal(const AAnimal&);
	AAnimal& operator = (const AAnimal&);
	virtual ~AAnimal();
};
