/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:22:25 by jbach             #+#    #+#             */
/*   Updated: 2022/10/26 16:38:32 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << BLUE << "WrongCat initialized :)" << std::endl << WHITE;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << BLUE << "WrongCat destroyed :(" << std::endl << WHITE;
	return;
}

WrongCat::WrongCat (WrongCat const & src)
{
	*this = src;
	return;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
	this->_type = src._type;
	return *this;
}
