/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:50:50 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 19:24:01 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {

	std::cout << BLUE << "Animal default constructor called" << STD << std::endl;
}

Animal::Animal(std::string type): _type(type) {

	std::cout << BLUE << "Animal default argument constructor called" << STD << std::endl;
}

Animal::Animal(const Animal& other) {

	std::cout << BLUE << "Animal copy constructor called" << STD << std::endl;
	*this = other;
}

Animal& Animal::operator = (const Animal& other) {

	std::cout << BLUE << "Animal copy assignment constructor called" << STD << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Animal::~Animal () {

	std::cout << BLUE << "Animal destructor called" << STD << std::endl;
}

std::string Animal::getType() const{

	return _type;
}

void Animal::makeSound () const{

	std::cout << BLUE << "Mooooooo" << STD << std::endl;
}
