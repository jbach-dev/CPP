/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:26:15 by jbach             #+#    #+#             */
/*   Updated: 2022/10/11 09:03:22 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	return;
}

Zombie::~Zombie(void){
	std::cout << CYAN << "Bye bye cute zombie named : " << Zombie::getName() << WHITE << std::endl << std::endl;
	return;
}

void	Zombie::announce(void) const
{
	std::cout << UBLU << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << WHITE << std::endl << std::endl;
}

std::string	Zombie::getName(void) const
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	if (name == "")
		return;
	this->_name = name;
	return;
}
