/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:23:27 by jbach             #+#    #+#             */
/*   Updated: 2022/10/26 15:40:11 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << CYAN << "Dog initialized :)" << std::endl << WHITE;
	return;
}

Dog::~Dog(void)
{
	std::cout << CYAN << "Dog destroyed :(" << std::endl << WHITE;
	return;
}

Dog::Dog (Dog const & src)
{
	*this = src;
	return;
}

Dog & Dog::operator=(Dog const & src)
{
	this->_type = src._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << CYAN << "Ouaffff" << std::endl << WHITE;
}
