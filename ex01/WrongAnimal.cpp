/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:20:03 by maballet          #+#    #+#             */
/*   Updated: 2026/01/12 19:26:02 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	std::cout << BLUE << "WrongAnimal default constructor called" << STD << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): _type(type), _brain(new Brain()) {

	std::cout << BLUE << "WrongAnimal default argument constructor called" << STD << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {

	std::cout << BLUE << "WrongAnimal copy constructor called" << STD << std::endl;
	_type = other._type;
	_brain = other._brain; // shallow copy
}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal& other ) {

	std::cout << BLUE << "WrongAnimal copy assignment constructor called" << STD << std::endl;
	if (this != &other) {
		_type = other._type;
		_brain = other._brain; // shallow copy
	}
	return *this;
}

WrongAnimal::~WrongAnimal () {

	// delete _brain;
	std::cout << BLUE << "WrongAnimal destructor called" << STD << std::endl;
}

std::string WrongAnimal::getBrainIdea() const{

	return (_brain->getIdea());
}

void WrongAnimal::setBrainIdea(std::string idea) {

	_brain->setIdea(idea);
}

void WrongAnimal::makeSound () const{

	std::cout << BLUE << "Mooooooo" << STD << std::endl;
}