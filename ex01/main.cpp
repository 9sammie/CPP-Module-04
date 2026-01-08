/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:50:06 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 17:49:41 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define NUMBER_OF_ANIMALS 10

int main() {

	std::cout << GREYBGBOLD << "~~~ Subject test ~~~" << STD << std::endl << std::endl;
	int i = 0;
	const Animal *animalTab[NUMBER_OF_ANIMALS];

	while (i < NUMBER_OF_ANIMALS)
	{
		if (i%2 == 0)
			animalTab[i] = new Dog();
		else
			animalTab[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < NUMBER_OF_ANIMALS)
	{
		delete animalTab[i];
		i++;
	}

	// std::cout << std::endl << std::endl << GREYBGBOLD << "~~~ WrongAnimal test ~~~" << STD << std::endl << std::endl;
	// WrongAnimal wrongAnimal1;
	// WrongAnimal wrongAnimal2(wrongAnimal1);
	// WrongAnimal wrongAnimal3 = wrongAnimal2;
	// wrongAnimal1.setBrainIdea("milk");
	// wrongAnimal2.setBrainIdea("water");
	// wrongAnimal3.setBrainIdea("soda");
	// std::cout << std::endl;
	// std::cout << BLUE << "wrongAnimal1 idea: " << wrongAnimal1.getBrainIdea() << " " << STD << std::endl;
	// std::cout << BLUE << "wrongAnimal2 idea: " << wrongAnimal2.getBrainIdea() << " " << STD << std::endl;
	// std::cout << BLUE << "wrongAnimal3 idea: " << wrongAnimal3.getBrainIdea() << " " << STD << std::endl;
	
	std::cout << std::endl << std::endl << GREYBGBOLD << "~~~ All cat constructor test ~~~" << STD << std::endl << std::endl;
	Cat Cat1;
	Cat Cat2(Cat1);
	Cat Cat3 = Cat2;
	Cat1.setBrainIdea("milk");
	Cat2.setBrainIdea("water");
	Cat3.setBrainIdea("purr");
	std::cout << std::endl;
	std::cout << GREEN << "Cat1 thought: " << Cat1.getBrainIdea() << STD << std::endl;
	std::cout << GREEN << "Cat2 thought: " << Cat2.getBrainIdea() << STD << std::endl;
	std::cout << GREEN << "Cat3 thought: " << Cat3.getBrainIdea() << STD << std::endl;

	std::cout << std::endl << std::endl << GREYBGBOLD << "~~~ All dog constructor test ~~~" << STD << std::endl << std::endl;
	Dog Dog1;
	Dog Dog2(Dog1);
	Dog Dog3 = Dog2;
	Dog1.setBrainIdea("play");
	Dog2.setBrainIdea("puppy eyes");
	Dog3.setBrainIdea("wave tail");
	std::cout << std::endl;
	std::cout << PINK << "Dog1 _type: " << Dog1.getBrainIdea() << STD << std::endl;
	std::cout << PINK << "Dog2 _type: " << Dog2.getBrainIdea() << STD << std::endl;
	std::cout << PINK << "Dog3 _type: " << Dog3.getBrainIdea() << STD << std::endl;
	
	std::cout << std::endl << std::endl << GREYBGBOLD << "~~~ Destruction check ~~~" << STD << std::endl << std::endl;

	return 0;
}