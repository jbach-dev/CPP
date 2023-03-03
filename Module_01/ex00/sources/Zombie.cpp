/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:21:35 by jbach             #+#    #+#             */
/*   Updated: 2022/10/10 20:07:51 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout << GRN << "Welcome new zombie named : " << Zombie::getName() << WHITE << std::endl << std::endl;
	return;
}

Zombie::~Zombie(void){
	std::cout << CYAN << "Bye bye zombie named : " << Zombie::getName() << WHITE << std::endl << std::endl;
	return;
}

void	Zombie::announce(void) const
{
	std::cout << UBLU << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << WHITE << std::endl << std::endl;
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}