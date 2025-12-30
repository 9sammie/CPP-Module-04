/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:50:06 by maballet          #+#    #+#             */
/*   Updated: 2025/12/30 19:03:18 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

	std::cout << GREYBGBOLD << "Subject test" << STD << std::endl << std::endl;
	const Animal meta;
	const Dog j;
	const Cat i;
	std::cout << j.getType() << " " << std::endl;
	std::cout << i.getType() << " " << std::endl;
	meta.makeSound();
	j.makeSound();
	i.makeSound();

	std::cout << std::endl << std::endl << GREYBGBOLD << "WrongAnimal test" << STD << std::endl << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	std::cout << wrongI->getType() << " " << std::endl;
	wrongMeta->makeSound();
	wrongI->makeSound();

	std::cout << std::endl << std::endl << GREYBGBOLD << "All cat constructor test" << STD << std::endl << std::endl;
	const Cat Cat1;
	const Cat Cat2(Cat1);
	const Cat Cat3 = Cat2;
	std::cout << std::endl;
	std::cout << GREEN << "Cat1 _type: " << Cat1.getType() << STD << std::endl;
	std::cout << GREEN << "Cat2 _type: " << Cat2.getType() << STD << std::endl;
	std::cout << GREEN << "Cat3 _type: " << Cat3.getType() << STD << std::endl;
	std::cout << GREEN << "Cat1 sound: " << STD; Cat1.makeSound();
	std::cout << GREEN << "Cat2 sound: " << STD; Cat2.makeSound();
	std::cout << GREEN << "Cat3 sound: " << STD; Cat3.makeSound();

	std::cout << std::endl << std::endl << GREYBGBOLD << "All dog constructor test" << STD << std::endl << std::endl;
	const Dog Dog1;
	const Dog Dog2(Dog1);
	const Dog Dog3 = Dog2;
	std::cout << std::endl;
	std::cout << PINK << "Dog1 _type: " << Dog1.getType() << STD << std::endl;
	std::cout << PINK << "Dog2 _type: " << Dog2.getType() << STD << std::endl;
	std::cout << PINK << "Dog3 _type: " << Dog3.getType() << STD << std::endl;
	std::cout << PINK << "Dog1 sound: " << STD; Dog1.makeSound();
	std::cout << PINK << "Dog2 sound: " << STD; Dog2.makeSound();
	std::cout << PINK << "Dog3 sound: " << STD; Dog3.makeSound();
	
	std::cout << std::endl << std::endl << GREYBGBOLD << "Destruction check" << STD << std::endl << std::endl;

return 0;
}