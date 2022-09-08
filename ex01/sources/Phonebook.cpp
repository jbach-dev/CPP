/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:36:58 by jbach             #+#    #+#             */
/*   Updated: 2022/09/08 16:28:32 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"
#include <iostream>
#include <cstdio>
#include <sstream>
#include <limits>
#include <iomanip> 


Phonebook::Phonebook(void){
	std::cout << std::endl << YEL << "Welcome in the PhoneBook ! Have a good time :)" << WHITE << std::endl << std::endl;
	this->_index = 0;
	this->_nb_contact = 0;
	this->_supp = 0;
	return;
}

Phonebook::~Phonebook(void){
	std::cout << std::endl << YEL << "Byeeeeeeee" << WHITE << std::endl << std::endl;
	return;
}


int	Phonebook::add_contact(void)
{
	Contact contact;
	std::string str;
	int flag = 0;
	std::cout << std::endl << BGRN << "* ADD a new contact *" << WHITE << std::endl << std::endl;
	if (this->_index == 8)
	{
		this->_index = 0;
		std::cout << RED << "~ We are deleting contact n*" << this->_index << WHITE << std::endl << std::endl;
		this->_supp = 1;
	}
	else if (this->_supp == 1)
		std::cout << RED << "~ We are deleting contact n*" << this->_index << WHITE << std::endl << std::endl;
	//first name
	str = ft_add_firstname();
	if (str[0])
		contact.set_firstname(str);
	else
		flag = 1;
	if (!flag)
	{
		str = ft_add_lastname();
		if (str[0])
			contact.set_lastname(str);
		else
			flag = 1;
	}
	if (!flag)
	{
		str = ft_add_nickname();
		if (str[0])
			contact.set_nickname(str);	
		else
			flag = 1;
	}
	if (!flag)
	{
		str = ft_add_phonenumber();
		if (str[0])
			contact.set_phonenumber(str);
		else
			flag = 1;
	}
	if (!flag)
	{
		str = ft_add_secret();
		if (str[0])
			contact.set_secret(str);
		else
			flag = 1;
	}
	else
	{
		std::cout << std::endl << std::endl << RED << "~ You did a Contol-D ~" << std::endl << std::endl ;
		return (0);
	}
	this->_contact[this->_index] = contact;
	this->_index += 1;
	this->_nb_contact += 1;
	return (1);
}

void	ft_resize(std::string str, int color)
{
	if (color == 0)
	{
		if (str.length() > 10)
		{
			str = str.substr(0, 9).append(".");
			std::cout << CYAN << std::setfill(' ') << std::setw(10) << str;
		}
		else
			std::cout << CYAN << std::setfill(' ') << std::setw(10) << str;
	}
	if (color == 1)
	{
		if (str.length() > 10)
		{
			str = str.substr(0, 9).append(".");
			std::cout << BLUE << std::setfill(' ') << std::setw(10) << str;
		}
		else
			std::cout << BLUE << std::setfill(' ') << std::setw(10) << str;
	}
}

void	Phonebook::ft_display_book(void)
{
	std::cout << std::endl << CYAN << std::setfill(' ') << std::setw(10) << "Index" << "|";
	std::cout << BLUE << std::setfill(' ') << std::setw(10) << "First Name" << "|";
	std::cout << CYAN << std::setfill(' ') << std::setw(10) << "Last Name" << "|";
	std::cout << BLUE << std::setfill(' ') << std::setw(10) << "NickName" << "|" <<std::endl << std::endl;

	
	for(int i = 0; i<=7 ;i++)
	{
		std::cout << CYAN << std::setfill(' ') << std::setw(10) << i;
		std::cout << " |";
		ft_resize(this->_contact[i].get_firstname(), 1);
		ft_resize(this->_contact[i].get_lastname(), 0);
		ft_resize(this->_contact[i].get_nickname(), 1);
		std::cout << std::endl;
	}
}

void	Phonebook::ft_one_contact(int index)
{
	std::cout << std::endl << UBLU <<"* Your contact n*" << index << WHITE << std::endl << std::endl;
	std::cout << CYAN << "* First Name : " << this->_contact[index].get_firstname()<< std::endl;
	std::cout << CYAN << "* Last Name : " << this->_contact[index].get_lastname()<< std::endl;
	std::cout << CYAN << "* Nickname : " << this->_contact[index].get_nickname()<< std::endl;
	std::cout << CYAN << "* Phone Number : " << this->_contact[index].get_phonenumber()<< std::endl;
	std::cout << CYAN << "* Darkest Secret : " << this->_contact[index].get_secret() << WHITE << std::endl << std::endl;
}

void	Phonebook::search_contact(void)
{
	int index = 0;

	ft_display_book();
	std::cout << BWHT << std::endl << "* What contact would you like to see ? *" << WHITE << std::endl;
	if (!(std::cin >> index) || index < 0 || index > 7 || index > (this->_nb_contact - 1))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout <<RED << "Wrong input ! You need to choose beetween the contact !" << WHITE  << std::endl << std::endl;
	}
	else
	{
		ft_one_contact(index);
		std::cin.ignore();
	}
}