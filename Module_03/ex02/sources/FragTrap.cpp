/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:40:47 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 19:41:30 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "cstring"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << WHITE << "FragTrap " << CYAN <<  this->_name << WHITE << " has " << CYAN << this->_hit_point << WHITE << " hit point & " << CYAN << this->_energy_point << WHITE << " energy point & " << CYAN << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << WHITE << "FragTrap " << CYAN <<  this->_name << WHITE << " has " << CYAN << this->_hit_point << WHITE << " hit point & " << CYAN << this->_energy_point << WHITE << " energy point & " << CYAN << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	this->_attack_damage = 30;
	this->_energy_point = 100;
	this->_hit_point = 100;
	std::cout << WHITE << "FragTrap " << CYAN <<  this->_name << WHITE << " has " << CYAN << this->_hit_point << WHITE << " hit point & " << CYAN << this->_energy_point << WHITE << " energy point & " << CYAN << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << WHITE << "FragTrap " << CYAN <<  this->_name << WHITE << " is destroyed !"<< std::endl << WHITE;
	return;
}

FragTrap::FragTrap (FragTrap const & src)
{
	std::cout << WHITE << "FragTrap " << CYAN <<  this->_name << WHITE << " has " << CYAN << this->_hit_point << WHITE << " hit point & " << CYAN << this->_energy_point << WHITE << " energy point & " << CYAN << this->_attack_damage << WHITE << " attack damage " <<std::endl << WHITE;
	*this = src;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	this->_name = src._name;
	this->_hit_point = src._hit_point;
	this->_energy_point = src._energy_point;
	this->_attack_damage = src._attack_damage;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::string buf;
	std::cout << WHITE << "Do you want to high five ?" << BLUE << std::endl << "yes or no"<< std::endl << WHITE;
	std::getline(std::cin, buf);
	while (!std::cin.eof())
	{
		if(!buf.compare("yes"))
		{
			std::cout << BLUE << "YESSSS HIGH FIVE !!!" << std::endl<< WHITE;
			break;
		}
		else if(!buf.compare("no"))
		{
			std::cout << BLUE <<"OH NOO SAD !!!" << std::endl<< WHITE;
			break;
		}
		else
		{
			std::cout << RED <<"ONLY yes or no" << std::endl<< WHITE;
			std::getline(std::cin, buf);
		}
	}
}
