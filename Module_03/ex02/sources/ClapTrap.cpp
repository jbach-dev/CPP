/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:41:31 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 19:27:23 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("NO NAME"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " has " << YEL << this->_hit_point << WHITE << " hit point & " << YEL << this->_energy_point << WHITE << " energy point & " << YEL << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " has " << YEL << this->_hit_point << WHITE << " hit point & " << YEL << this->_energy_point << WHITE << " energy point & " << YEL << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " is destroyed !"<< std::endl << WHITE;
	return;
}

ClapTrap::ClapTrap (ClapTrap const & src)
{
	*this = src;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	this->_name = src._name;
	this->_hit_point = src._hit_point;
	this->_energy_point = src._energy_point;
	this->_attack_damage = src._attack_damage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_point > 0)
	{
		std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " attacks " << YEL << target << WHITE << ", causing " << YEL << this->_attack_damage << WHITE << " points of damage!" << std::endl << WHITE;
		this->_energy_point -= 1;
		std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " just lost 1 energy point while attacking. Now he has " << YEL << this->_energy_point << WHITE << " energy points "<< std::endl << WHITE;
	}
	else
		std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " has no energy point. He can't execute an action " << std::endl << WHITE;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energy_point > 0)
	{
		this->_energy_point = _energy_point - amount;
		if (this->_energy_point < 0)
			this->_energy_point = 0;
		std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " takes " << YEL << amount << WHITE << " damage. Now he has " << YEL << this->_energy_point << WHITE << " energy points "<< std::endl << WHITE;
	}
	else
		std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " has no energy point. He can't execute an action " << std::endl << WHITE;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_point > 0)
	{
		this->_energy_point = _energy_point + amount;
		std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " takes " << YEL << amount << WHITE << " points repairing. Now he has " << YEL << this->_energy_point << WHITE << " energy points "<< std::endl << WHITE;
		this->_energy_point -= 1;
		std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " just lost 1 energy point while repairing. Now he has " << YEL << this->_energy_point << WHITE << " energy points "<< std::endl << WHITE;

	}
	else
		std::cout << WHITE << "ClapTrap " << YEL <<  this->_name << WHITE << " has no energy point. He can't execute an action " << std::endl << WHITE;
}
