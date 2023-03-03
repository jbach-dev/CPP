/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:57:35 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 19:15:17 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << WHITE << "ScavTrap " << GRN <<  this->_name << WHITE << " has " << GRN << this->_hit_point << WHITE << " hit point & " << GRN << this->_energy_point << WHITE << " energy point & " << GRN << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << WHITE << "ScavTrap " << GRN <<  this->_name << WHITE << " has " << GRN << this->_hit_point << WHITE << " hit point & " << GRN << this->_energy_point << WHITE << " energy point & " << GRN << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	this->_attack_damage = 20;
	this->_energy_point = 50;
	this->_hit_point = 100;
	std::cout << WHITE << "ScavTrap " << GRN <<  this->_name << WHITE << " has " << GRN << this->_hit_point << WHITE << " hit point & " << GRN << this->_energy_point << WHITE << " energy point & " << GRN << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << WHITE << "ScavTrap " << GRN <<  this->_name << WHITE << " is destroyed !"<< std::endl << WHITE;
	return;
}

ScavTrap::ScavTrap (ScavTrap const & src)
{
	std::cout << WHITE << "ScavTrap " << GRN <<  this->_name << WHITE << " has " << GRN << this->_hit_point << WHITE << " hit point & " << GRN << this->_energy_point << WHITE << " energy point & " << GRN << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	*this = src;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	this->_name = src._name;
	this->_hit_point = src._hit_point;
	this->_energy_point = src._energy_point;
	this->_attack_damage = src._attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energy_point > 0)
	{
		std::cout << WHITE << "ScavTrap " << GRN <<  this->_name << WHITE << " attacks " << GRN << target << WHITE << ", causing " << GRN << this->_attack_damage << WHITE << " points of damage!" << std::endl << WHITE;
		this->_energy_point -= 1;
		std::cout << WHITE << "ScavTrap " << GRN <<  this->_name << WHITE << " just lost 1 energy point while attacking. Now he has " << GRN << this->_energy_point << WHITE << " energy points "<< std::endl << WHITE;
	}
	else
		std::cout << WHITE << "ScavTrap " << GRN <<  this->_name << WHITE << " has no energy point. He can't execute an action " << std::endl << WHITE;
}

void ScavTrap::guardGate()
{
	std::cout << WHITE << "ScavTrap " << GRN << this->_name << WHITE << " has entered in mode " << GRN << "Gate Keeper !" << std::endl << WHITE;
}
