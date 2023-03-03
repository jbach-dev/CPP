/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/09 18:54:57 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void plusone(T elem)
{
	std::cout << elem + 1 << std::endl;
};

template <typename T>
void ft_cout_blue(T elem)
{
	std::cout << BLUE << elem << std::endl<< RESET;
};


int main(void)
{
	std::cout << YEL << " --- test with int --- " << std::endl << RESET;
	int tab_int[5] = {1,25,74,45,65};
	iter(tab_int, 5, plusone);
	
	std::cout  << YEL << std::endl << " --- test with float --- " << std::endl << RESET;
	float tab_float[3] = {-5.5,48, -65};
	iter(tab_float, 3, plusone);

	std::cout  << YEL << std::endl << " --- test with string --- " << std::endl << RESET;
	std::string tab_str[7] = {"road","affair","recognition","environment","operation", "singer", "communication"};
	iter(tab_str, 7, ft_cout_blue);

	return 0;
}
