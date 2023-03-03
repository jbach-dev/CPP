/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:53:44 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "-- Bureaucrat --" << std::endl;
	try
	{
		Bureaucrat Ane("L'âne", 146);
		std::cout << Ane << std::endl;
		Ane.minusGrade();
		std::cout << Ane << std::endl;
		Ane.minusGrade();
		std::cout << Ane << std::endl;
		Ane.minusGrade();
		std::cout << Ane << std::endl;
		Ane.minusGrade();
		std::cout << Ane << std::endl;
		Ane.minusGrade();
		std::cout << Ane << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}
	try
	{
		Bureaucrat Shrek("Shrek", 3);
		Shrek.plusGrade();
		std::cout << Shrek << std::endl;
		Shrek.plusGrade();
		std::cout << Shrek << std::endl;
		Shrek.plusGrade();
		std::cout << Shrek << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}
	return 0;
}