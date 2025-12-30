/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:13:08 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 18:16:08 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {

	std::cout << GREEN << "Cat default constructor called" << STD << std::endl;
}

Cat::Cat(const Cat& other): Animal(other) {

	std::cout << GREEN << "Cat copy constructor called" << STD << std::endl;
	*this = other;
}

// Cpy all the "other" attribut at once line 32.
Cat& Cat::operator = (const Cat& other) {

	std::cout << GREEN << "Cat copy assignment constructor called" << STD << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat () {

	std::cout << GREEN << "Cat destructor called" << STD << std::endl;
}

void Cat::makeSound () const {

	std::cout << GREEN << "MiAouUuUuuuu" << STD << std::endl;
}
