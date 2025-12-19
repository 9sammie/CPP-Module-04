/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:13:08 by maballet          #+#    #+#             */
/*   Updated: 2025/12/19 14:14:51 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat( std::string type ): _type(type) {

	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat& other ) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator = ( const Cat& other ) {

	std::cout << "Cat copy assignment constructor called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cat::~Cat () {

	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound () {

	std::cout << "Mooooooo" << std::endl;
}