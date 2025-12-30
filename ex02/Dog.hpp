/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:08:52 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 22:15:43 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {

	public:
	Dog();
	Dog(const Dog&);
	Dog& operator = (const Dog&);
	virtual ~Dog();
	
	virtual void setBrainIdea(std::string idea);
	std::string getBrainIdea() const;
	virtual void makeSound() const;
};

#endif