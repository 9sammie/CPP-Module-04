/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:17:21 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 21:31:34 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << RED << "Brain default constructor called" << STD << std::endl;
}

Brain::Brain(const Brain& other) {

	std::cout << RED << "Brain copy constructor called" << STD << std::endl;
	*this = other;
}

Brain& Brain::operator = ( const Brain& ) {

	std::cout << RED << "Brain copy assignment constructor called" << STD << std::endl;
	return *this;
}

Brain::~Brain () {

	std::cout << RED << "Brain destructor called" << STD << std::endl;
}

void Brain::setIdea(std::string idea) {

	ideas[0] = idea;
}

std::string Brain::getIdea() const{

	return ideas[0];
}