/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:55:24 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 21:48:33 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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

class Animal {

	protected:
	std::string _type;
	Brain* _brain;

	public:
	Animal(std::string name = "");
	Animal(const Animal&);
	Animal& operator = (const Animal&);
	virtual ~Animal();
	
	void setBrainIdea(std::string idea);
	std::string getBrainIdea() const;
	std::string getType() const;
	virtual void makeSound() const;

};

#endif