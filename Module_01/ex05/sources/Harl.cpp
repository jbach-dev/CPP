/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:28:03 by jbach             #+#    #+#             */
/*   Updated: 2022/10/18 15:37:43 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::debug(void)
{
	std::cout << CYAN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl << std::endl << WHITE;
}

void Harl::info(void)
{
	std::cout << PURPLE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl << WHITE;
}

void Harl::warning(void)
{
	std::cout << BLUE << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl << WHITE;
}

void Harl::error(void)
{
	std::cout << GRN << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl << WHITE;
}

void Harl::complain(std::string level)
{
	std::string all_levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	void (Harl::*function[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	int i = 0;
	while (i < 4)
	{
		if (all_levels[i] == level)
		{
			(this->*function[i])();
			return ;
		}
		i++;
	}
	std::cout << RED << "No message available !" << std::endl << std::endl << WHITE;
	return ;
}