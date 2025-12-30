/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:13:04 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 21:30:46 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#define STD			"\033[0m"
#define	RED			"\033[38;5;160m\033[48;5;217m"

#include <iostream>
#include <string>

class Brain {

	private:
	std::string ideas[100];

	public:
	Brain();
	Brain(const Brain&);
	Brain& operator = (const Brain&);
	~Brain();

	void setIdea(std::string idea);
	std::string getIdea() const;
};

#endif