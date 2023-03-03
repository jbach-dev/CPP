/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:20:06 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 09:50:40 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << YEL << "Animal initialized :)" << std::endl << WHITE;
	return;
}

Animal::~Animal(void)
{
	std::cout << YEL << "Animal destroyed :(" << std::endl << WHITE;
	return;
}

Animal::Animal (Animal const & src)
{
	*this = src;
	return;
}

Animal & Animal::operator=(Animal const & src)
{
	this->_type = src._type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << YEL << "I don't know what sound to make..." << std::endl << WHITE;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}



