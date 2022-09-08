/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:08:50 by jbach             #+#    #+#             */
/*   Updated: 2022/09/08 13:43:04 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdio>

int main(int argc, char **argv)
{
	char charac;
	int i;
	int y;
	i = 0;
	y = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argc && argv[y])
		{
			i = 0;
			while (argv[y][i])
			{
				if (toupper(argv[y][i]))
					charac = toupper(argv[y][i]);
				std::cout << charac;
				i++;
			}
			y++;
			argc--;
		}
		if (charac)
			std::cout << std::endl;
	}
	return (1);
}