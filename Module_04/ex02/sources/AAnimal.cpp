/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:20:06 by jbach             #+#    #+#             */
/*   Updated: 2022/10/26 19:25:31 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << YEL << "AAnimal initialized :)" << std::endl << WHITE;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << YEL << "AAnimal destroyed :(" << std::endl << WHITE;
	return;
}

AAnimal::AAnimal (AAnimal const & src)
{
	*this = src;
	return;
}

AAnimal & AAnimal::operator=(AAnimal const & src)
{
	this->_type = src._type;
	return *this;
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}

