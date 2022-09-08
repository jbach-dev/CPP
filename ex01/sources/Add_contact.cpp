/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:37:51 by jbach             #+#    #+#             */
/*   Updated: 2022/09/08 16:22:59 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"
#include <iostream>
#include <cstdio>
#include <stddef.h>

std::string ft_add_firstname(void)
{
	std::string str;
	std::cout << GRN << "- Enter first name :" << WHITE;
	std::getline(std::cin, str);
	while (!std::cin.eof() && !str[0])
	{
		std::cout << RED << "You need to enter a first name !" << WHITE << std::endl;
		std::cout << GRN << "- Enter first name :" << WHITE;
		std::getline(std::cin, str);
	}
	if (!std::cin.eof())
		return (str);
	else
	{
		str[0] = '\0';
		return (str);
	}
}

std::string ft_add_lastname(void)
{
	std::string str;
	std::cout << GRN << "- Enter last name :" << WHITE;
	std::getline(std::cin, str);
	while (!std::cin.eof() && !str[0])
	{
		std::cout << RED << "You need to enter a last name !" << WHITE << std::endl;
		std::cout << GRN << "- Enter last name :" << WHITE;
		std::getline(std::cin, str);
	}
	if (!std::cin.eof())
		return (str);
	else
	{
		str[0] = '\0';
		return (str);
	}
}

std::string ft_add_nickname(void)
{
	std::string str;
	std::cout << GRN << "- Enter nickname :" << WHITE;
	std::getline(std::cin, str);
	while (!std::cin.eof() && !str[0])
	{
		std::cout << RED << "You need to enter a nickname !" << WHITE << std::endl;
		std::cout << GRN << "- Enter nickname :" << WHITE;
		std::getline(std::cin, str);
	}
	if (!std::cin.eof())
		return (str);
	else
	{
		str[0] = '\0';
		return (str);
	}
}

int	ft_all_digit(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

std::string ft_add_phonenumber(void)
{
	std::string str;
	std::cout << GRN << "- Enter phone number :" << WHITE;
	std::getline(std::cin, str);
	while (!ft_all_digit(str) || (!std::cin.eof() && !str[0]))
	{
		std::cout << RED << "You need to enter a phone number !" << WHITE << std::endl;
		std::cout << GRN << "- Enter phone number :" << WHITE;
		std::getline(std::cin, str);
	}
	if (!std::cin.eof())
		return (str);
	else
	{
		str[0] = '\0';
		return (str);
	}
}

std::string ft_add_secret(void)
{
	std::string str;
	std::cout << GRN << "- Enter the darkest secret :" << WHITE;
	std::getline(std::cin, str);
	while (!std::cin.eof() && !str[0])
	{
		std::cout << RED << "You need to enter the darkest secret !" << WHITE << std::endl;
		std::cout << GRN << "- Enter the darkest secret :" << WHITE;
		std::getline(std::cin, str);
	}
	std::cout << std::endl;
	if (!std::cin.eof())
		return (str);
	else
	{
		str[0] = '\0';
		return (str);
	}
}