/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:46:43 by jbach             #+#    #+#             */
/*   Updated: 2022/10/18 17:23:01 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return;
}

HumanB::~HumanB(void)
{
	std::cout << BLUE << "Bye HumanB !" << WHITE << std::endl<< std::endl;
	return;
}

void	HumanB::attack(void) const
{
	if (_weapon)
		std::cout << BLUE << _name << " attacks with their " << _weapon->getType() << WHITE << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}