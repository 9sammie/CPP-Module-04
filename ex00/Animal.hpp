/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:55:24 by maballet          #+#    #+#             */
/*   Updated: 2025/12/19 13:51:55 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

class Animal {

	private:
	std::string _type;

	public:
	Animal( std::string name = "" );
	Animal( const Animal& );
	Animal& operator = ( const Animal& );
	virtual ~Animal();
	
	virtual void makeSound();

};

#endif