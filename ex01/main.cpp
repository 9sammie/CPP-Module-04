/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:50:06 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 21:56:43 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

	std::cout << GREYBGBOLD << "~~~ Subject test ~~~" << STD << std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << std::endl << std::endl << GREYBGBOLD << "~~~ WrongAnimal test ~~~" << STD << std::endl << std::endl;
	WrongAnimal wrongMeta;
	WrongAnimal wrongI = wrongMeta;
	wrongMeta.setBrainIdea("milk");
	wrongI.setBrainIdea("water");
	std::cout << std::endl;
	std::cout << BLUE << "wrongMeta idea: " << wrongMeta.getBrainIdea() << " " << STD << std::endl;
	std::cout << GREEN << "wrongI idea: " << wrongI.getBrainIdea() << " " << STD << std::endl;

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