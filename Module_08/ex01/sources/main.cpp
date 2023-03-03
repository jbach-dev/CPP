/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/23 15:07:00 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(int, char**)
{
	//add numbers
	std::cout << YEL << std::endl << "--- Add numbers ---" << std::endl<< std::endl << RESET;
	Span nb(10);
	std::vector<int> new_span;
	std::vector<int> new_span_big;
	try
	{
		nb.addNumber(8);
		nb.addNumber(2);
		nb.addNumber(1);
		nb.addNumber(4);
		nb.addNumber(9);
		nb.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << RESET;
	}
	std::cout << YEL << std::endl << "--- Add numbers without enough place---" << std::endl<< std::endl << RESET;
	Span nb_small(5);
	try
	{
		nb_small.addNumber(8);
		nb_small.addNumber(2);
		nb_small.addNumber(1);
		nb_small.addNumber(4);
		nb_small.addNumber(9);
		nb_small.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << RESET;
	}
	std::cout << YEL << std::endl << "--- Shortest and longest Span ---" << std::endl<< std::endl << RESET;
	try
	{
		nb.getVector();
		nb.shortestSpan();
		nb.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << RESET;
	}
	std::cout << YEL << std::endl << "--- Insert ---" << std::endl<< std::endl << RESET;
	try
	{
		new_span.push_back(-2);
		new_span.push_back(20);
		new_span.push_back(47);
		new_span.push_back(23);
		new_span.push_back(90);
		new_span.push_back(34);
		nb.fillSpan(new_span.begin(), new_span.begin()+3);
		nb.shortestSpan();
		nb.longestSpan();
		nb.getVector();
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << RESET;
	}
	std::cout << YEL << std::endl << "--- Big numbers ---" << std::endl<< std::endl<< RESET;
	Span nb_big(11000);
	try
	{
		for (int i = 0; i < 10000; i++)
		{
			new_span_big.push_back(rand());
		}
		std::vector<int>::iterator it = new_span_big.begin();
		std::vector<int>::iterator ite = new_span_big.end();
		
		nb_big.fillSpan(it, ite);
		// int nb = 0;
		// for (; it != ite; ++it)
		// {
		// 	nb++;
		// }
		// std::cout << nb << std::endl;
		nb_big.longestSpan();
		nb_big.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << RESET;
	}
}

//Testeur subject
// int main()
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	sp.shortestSpan();
// 	sp.longestSpan();
// 	return 0;
// }