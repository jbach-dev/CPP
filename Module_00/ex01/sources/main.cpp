/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:37:06 by jbach             #+#    #+#             */
/*   Updated: 2022/09/06 17:41:44 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/Phonebook.hpp"
#include <string.h>
#include <iostream>
#include <stdio.h>
# define WHITE "\e[0;37m"
# define RED "\e[1;91m"
#define BWHT "\e[1;37m"


std::string	ft_ask(std::string action, int c)
{
	if (c == 1)
		std::cout << BWHT << "* What do you want to do ? *" << WHITE << std::endl;
	if (c == 0)
		std::cout << RED << "~ INVALID: you can only ADD, SEARCH or EXIT ~" << WHITE << std::endl << std::endl;
	std::getline(std::cin, action);
	return (action);
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string	action;
	Phonebook phonebook;
	action = ft_ask(action, 1);
	while (!std::cin.eof() && action.compare("EXIT") != 0)
	{
		if (action.compare("ADD") == 0)
		{
			if (phonebook.add_contact())
				action = ft_ask(action, 1);
		}
		else if (action.compare("SEARCH") == 0)
		{
			phonebook.search_contact();
			action = ft_ask(action, 1);
		}
		else
			action = ft_ask(action, 0);
	}
	
	return (1);
}