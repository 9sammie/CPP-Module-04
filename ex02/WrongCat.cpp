/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:20:08 by maballet          #+#    #+#             */
/*   Updated: 2026/01/06 14:20:11 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {

	std::cout << GREEN << "WrongCat default constructor called" << STD << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other) {

	std::cout << GREEN << "WrongCat copy constructor called" << STD << std::endl;
	*this = other;
}

// Copy all the "other" attribut at once line 32.
WrongCat& WrongCat::operator = (const WrongCat& other) {

	std::cout << GREEN << "WrongCat copy assignment constructor called" << STD << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat () {

	std::cout << GREEN << "WrongCat destructor called" << STD << std::endl;
}

void WrongCat::makeSound () const {

	std::cout << GREEN << "MiAouUuUuuuu" << STD << std::endl;
}
