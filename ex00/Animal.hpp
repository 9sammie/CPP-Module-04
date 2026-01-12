/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:55:24 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 19:21:51 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define STD			"\033[0m"
#define BLUE		"\033[38;5;44m\033[48;5;159m"
#define GREEN		"\033[38;5;34m\033[48;5;193m"
#define PINK		"\033[38;5;199m\033[48;5;225m"
#define GREYBGBOLD	"\033[48;5;237m\033[1m"

#include <iostream>
#include <string>

class Animal {

	protected:
	std::string _type;

	public:
	Animal();
	Animal(std::string name);
	Animal(const Animal&);
	Animal& operator = (const Animal&);
	virtual ~Animal();
	
	std::string getType() const;
	virtual void makeSound() const;

};

#endif