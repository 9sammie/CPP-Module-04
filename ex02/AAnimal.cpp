/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:50:50 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 22:25:33 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( std::string type ): _type(type), _brain(new Brain()) {

	std::cout << BLUE << "AAnimal default constructor called" << STD << std::endl;
}

// deep copy with new Brain de *other._brain. That way we now point on this new brain
// instead of the one already created by AAnimal.
AAnimal::AAnimal( const AAnimal& other ): _type(other._type), _brain(new Brain(*other._brain)) {

	std::cout << BLUE << "AAnimal copy constructor called" << STD << std::endl;
}

// deep copy with _brain = new Brain de *other._brain.  That way we now point on this new brain
// instead of the one already created by AAnimal.
AAnimal& AAnimal::operator = ( const AAnimal& other ) {

	std::cout << BLUE << "AAnimal copy assignment constructor called" << STD << std::endl;
	if (this != &other) {
		_type = other._type;
		delete _brain;
		_brain = new Brain(*other._brain); // deep copy
	}
	return *this;
}

AAnimal::~AAnimal () {
	
	delete _brain;
	std::cout << BLUE << "AAnimal destructor called" << STD << std::endl;
}
