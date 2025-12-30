/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:50:50 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 21:49:02 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( std::string type ): _type(type), _brain(new Brain()) {

	std::cout << BLUE << "Animal default constructor called" << STD << std::endl;
}

// deep copy with new Brain de *other._brain. That way we now point on this new brain
// instead of the one already created by Animal.
Animal::Animal( const Animal& other ): _type(other._type), _brain(new Brain(*other._brain)) {

	std::cout << BLUE << "Animal copy constructor called" << STD << std::endl;
}

// deep copy with _brain = new Brain de *other._brain.  That way we now point on this new brain
// instead of the one already created by Animal.
Animal& Animal::operator = ( const Animal& other ) {

	std::cout << BLUE << "Animal copy assignment constructor called" << STD << std::endl;
	if (this != &other) {
		_type = other._type;
		delete _brain;
		_brain = new Brain(*other._brain); // deep copy
	}
	return *this;
}

Animal::~Animal () {
	
	delete _brain;
	std::cout << BLUE << "Animal destructor called" << STD << std::endl;
}

std::string Animal::getType() const{

	return _type;
}

std::string Animal::getBrainIdea() const{

	return (_brain->getIdea());
}

void Animal::setBrainIdea(std::string idea) {

	_brain->setIdea(idea);
}

void Animal::makeSound () const{

	std::cout << BLUE << "Mooooooo" << STD << std::endl;
}
