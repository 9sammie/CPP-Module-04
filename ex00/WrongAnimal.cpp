/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:20:03 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 19:24:50 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	std::cout << BLUE << "WrongAnimal default constructor called" << STD << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type) {

	std::cout << BLUE << "WrongAnimal default argument constructor called" << STD << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {

	std::cout << BLUE << "WrongAnimal copy constructor called" << STD << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other) {

	std::cout << BLUE << "WrongAnimal copy assignment constructor called" << STD << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal () {

	std::cout << BLUE << "WrongAnimal destructor called" << STD << std::endl;
}

std::string WrongAnimal::getType() const{

	return _type;
}

void WrongAnimal::makeSound () const{

	std::cout << BLUE << "Mooooooo" << STD << std::endl;
}