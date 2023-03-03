/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:13:07 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 13:25:56 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *animals[5];
	// Brain *brain;
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	// brain = animals[0]->getBrain();
	// std::cout << brain->getIdea(0) << std::endl;
	// std::cout << brain->getIdea(1) << std::endl;
	for (int i = 0; i < 5; i++)
	{
		animals[i]->getType();
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}