/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:17 by jbach             #+#    #+#             */
/*   Updated: 2022/10/18 16:00:55 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
		std::cout << RED << "Harl only accept two arguments !" << std::endl << WHITE;
	else
	{
		harl.complain(argv[1]);
	}
	return (1);
}