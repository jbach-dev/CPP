/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:57:26 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 10:00:37 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << BLUE << "Brain initialized :)" << std::endl << WHITE;
	this->_idea[0] = "SALUT LE SANG";
	this->_idea[1] = "WESH LE SANG";
	return;
}

Brain::~Brain(void)
{
	std::cout << BLUE << "Brain destroyed :(" << std::endl << WHITE;
	return;
}

Brain::Brain (Brain const & src)
{
	*this = src;
	for (int i = 0; i < 100 ; i++)
		this->getIdea(i) = src.getIdea(i);
	return;
}

Brain & Brain::operator=(Brain const & src)
{
	for (int i = 0; i < 100 ; i++)
		this->getIdea(i) = src.getIdea(i);
	return *this;
}

std::string Brain::getIdea(int index) const
{
	return this->_idea[index];
}
