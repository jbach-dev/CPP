/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:22:25 by jbach             #+#    #+#             */
/*   Updated: 2022/10/26 15:39:45 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << BLUE << "Cat initialized :)" << std::endl << WHITE;
	return;
}

Cat::~Cat(void)
{
	std::cout << BLUE << "Cat destroyed :(" << std::endl << WHITE;
	return;
}

Cat::Cat (Cat const & src)
{
	*this = src;
	return;
}

Cat & Cat::operator=(Cat const & src)
{
	this->_type = src._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << BLUE << "Miaouuuuu" << std::endl << WHITE;
}
