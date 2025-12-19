/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:50:50 by maballet          #+#    #+#             */
/*   Updated: 2025/12/19 13:58:39 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( std::string type ): _type(type) {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal& other ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator = ( const Animal& other ) {

	std::cout << "Animal copy assignment constructor called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Animal::~Animal () {

	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound () {

	std::cout << "Mooooooo" << std::endl;
}
