/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:40:59 by jbach             #+#    #+#             */
/*   Updated: 2022/10/17 16:50:42 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _weapon(&Weapon)
{
	return;
}

HumanA::~HumanA(void)
{
	std::cout << CYAN << "Bye HumanA !" << WHITE << std::endl << std::endl;
	return;
}

void	HumanA::attack(void) const
{
	std::cout << CYAN << _name << " attacks with their " << _weapon->getType() << WHITE << std::endl;
}
