/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:07:08 by jbach             #+#    #+#             */
/*   Updated: 2022/09/06 21:16:15 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include <iostream>

Contact::Contact(void){
	// std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){
	// std::cout << "Destructor called" << std::endl;
	return;
}

std::string	Contact::get_firstname(void) const
{
	return this->_firstname;
}

std::string	Contact::get_lastname(void) const
{
	return this->_lastname;
}

std::string	Contact::get_nickname(void) const
{
	return this->_nickname;
}

std::string	Contact::get_phonenumber(void) const
{
	return this->_phonenumber;
}

std::string	Contact::get_secret(void) const
{
	return this->_secret;
}

void	Contact::set_firstname(std::string firstname)
{
	this->_firstname = firstname;
}

void	Contact::set_lastname(std::string lastname)
{
	this->_lastname = lastname;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_phonenumber(std::string phonenb)
{
	this->_phonenumber = phonenb;
}

void	Contact::set_secret(std::string secret)
{
	this->_secret = secret;
}

