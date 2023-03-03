/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:22:25 by jbach             #+#    #+#             */
/*   Updated: 2022/10/26 19:26:20 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << BLUE << "Cat initialized :)" << std::endl << WHITE;
	return;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << BLUE << "Cat destroyed :(" << std::endl << WHITE;
	return;
}

Cat::Cat (Cat const & src) : AAnimal(src), _brain(src._brain) 
{
	*this = src;
	this->_brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->_brain->getIdea(i) = src._brain->getIdea(i);
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
