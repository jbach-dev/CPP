/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:20:06 by jbach             #+#    #+#             */
/*   Updated: 2022/10/26 16:38:08 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << YEL << "WrongAnimal initialized :)" << std::endl << WHITE;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << YEL << "WrongAnimal destroyed :(" << std::endl << WHITE;
	return;
}

WrongAnimal::WrongAnimal (WrongAnimal const & src)
{
	*this = src;
	return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	this->_type = src._type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << YEL << "I don't know what sound to make... I'm a wrong animal..." << std::endl << WHITE;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}



