/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:27:32 by jbach             #+#    #+#             */
/*   Updated: 2022/10/18 17:43:03 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void	main_tester()
{
	std::cout << CYAN << "Working -- simple" << std::endl << WHITE;
	std::string filename_ex1 = "files/ex1";
	std::string s1_ex1 = "c'est";
	std::string s2_ex1 = "c";
	replace(filename_ex1, s1_ex1, s2_ex1);
	
	std::cout << CYAN << "Working -- multiple" << std::endl << WHITE;
	std::string filename_ex2 = "files/ex2";
	std::string s1_ex2 = "le";
	std::string s2_ex2 = "la";
	replace(filename_ex2, s1_ex2, s2_ex2);

	std::cout << CYAN << "working -- no s2" << std::endl << WHITE;
	std::string filename_ex6 = "files/ex6";
	std::string s1_ex6 = "c'est";
	std::string s2_ex6 = "";
	replace(filename_ex6, s1_ex6, s2_ex6);

	std::cout << CYAN << "Working -- special caracter" << std::endl << WHITE;
	std::string filename_ex3 = "files/ex3";
	std::string s1_ex3 = ":";
	std::string s2_ex3 = ":)";
	replace(filename_ex3, s1_ex3, s2_ex3);

	std::cout << PURPLE << "Not working -- no filename" << std::endl << WHITE;
	std::string filename_ex4 = "";
	std::string s1_ex4 = "c'est";
	std::string s2_ex4 = "c";
	replace(filename_ex4, s1_ex4, s2_ex4);

	std::cout << PURPLE << "Not working -- no s1" << std::endl << WHITE;
	std::string filename_ex5 = "files/ex5";
	std::string s1_ex5 = "";
	std::string s2_ex5 = "c";
	replace(filename_ex5, s1_ex5, s2_ex5);

	std::cout << PURPLE << "Not working -- not existing filename" << std::endl << WHITE;
	std::string filename_ex7 = "files/ex3lol";
	std::string s1_ex7 = "c'est";
	std::string s2_ex7 = "c";
	replace(filename_ex7, s1_ex7, s2_ex7);

	std::cout << PURPLE << "Not working -- not existing s1" << std::endl << WHITE;
	std::string filename_ex8 = "files/ex8";
	std::string s1_ex8 = "Les";
	std::string s2_ex8 = "les";
	replace(filename_ex8, s1_ex8, s2_ex8);
}