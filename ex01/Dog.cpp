/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:01:24 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 20:36:55 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {

	std::cout << PINK << "Dog default constructor called" << STD << std::endl;
}

Dog::Dog(const Dog& other): Animal(other) {

	std::cout << PINK << "Dog copy constructor called" << STD << std::endl;
	*this = other;
}

// Cpy all the "other" attribut at once line 32.
Dog& Dog::operator = (const Dog& other) {

	std::cout << PINK << "Dog copy assignment constructor called" << STD << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog () {

	std::cout << PINK << "Dog destructor called" << STD << std::endl;
}

void Dog::makeSound () const{

	std::cout << PINK << "waf waf ! ˚ ⋅૮₍ › ˕ ‹ ₎ა ⋅˚⋅" << STD << std::endl;
}