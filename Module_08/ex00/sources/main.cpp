/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/23 14:30:44 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main(int, char**)
{
	std::cout << YEL << "Test no occurence :" << std::endl << std::endl << RESET;
    int a = 15;
    std::list<int> lst1;
	lst1.push_back(10);
	lst1.push_back(23);
	lst1.push_back(3);
	lst1.push_back(17);
	lst1.push_back(20);

	easyfind(lst1, a);

	std::cout << std::endl << YEL << "Test occurence :" << std::endl << std::endl << RESET;
	int b = 2;
    std::list<int> lst2;
	lst2.push_back(10);
	lst2.push_back(23);
	lst2.push_back(3);
	lst2.push_back(17);
	lst2.push_back(2);

	easyfind(lst2, b);
}
