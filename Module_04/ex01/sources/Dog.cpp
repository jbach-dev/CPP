/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:23:27 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 10:07:04 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << CYAN << "Dog initialized :)" << std::endl << WHITE;
	return;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << CYAN << "Dog destroyed :(" << std::endl << WHITE;
	return;
}

Dog::Dog (Dog const & src)
{
	*this = src;
	this->_brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->_brain->getIdea(i) = src._brain->getIdea(i);
	return;
}

Dog & Dog::operator=(Dog const & src)
{
	this->_type = src._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->_brain->getIdea(i) = src._brain->getIdea(i);
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << CYAN << "Ouaffff" << std::endl << WHITE;
}
Brain	*Dog::getBrain(void) const
{
	return this->_brain;
}