/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:20:06 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 19:26:18 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define STD			"\033[0m"
#define BLUE		"\033[38;5;44m\033[48;5;159m"
// #define BLUEBG		"\033[48;5;193m"
#define GREEN		"\033[38;5;34m\033[48;5;193m"
// #define GREENBG		"\033[48;5;193m"
#define PINK		"\033[38;5;199m\033[48;5;225m"
// #define PINKBG		"\033[48;5;225m"
#define GREYBGBOLD	"\033[48;5;237m\033[1m"
// #define GREYBG		"\033[48;5;237m"

#include <iostream>
#include <string>
#include "Brain.hpp"

class WrongAnimal {

	protected:
	std::string _type;
	Brain* _brain;

	public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator = (const WrongAnimal&);
	virtual ~WrongAnimal();
	
	void setBrainIdea(std::string idea);
	std::string getBrainIdea() const;
	virtual void makeSound() const;

};

#endif