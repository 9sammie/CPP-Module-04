/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dogg.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:08:52 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 18:23:27 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	public:
	Dog();
	Dog(const Dog&);
	Dog& operator = (const Dog&);
	virtual ~Dog();
	
	virtual void makeSound() const;
};

#endif