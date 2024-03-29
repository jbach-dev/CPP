/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:11:38 by jbach             #+#    #+#             */
/*   Updated: 2022/10/12 20:19:41 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define GRN "\e[0;32m"
# define CYAN "\e[1;96m"
# define PURPLE "\e[1;95m"
# define BLUE "\e[1;94m"
# define RED "\e[1;91m"
# define WHITE "\e[0;37m"
# define BWHT "\e[1;37m"
# define UBLU "\e[4;34m"
# define YEL "\e[0;33m"
# define BGRN "\e[1;32m"

int main()
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << PURPLE << "Address of str = " <<  &str << WHITE << std::endl;
	std::cout << CYAN << "Address of stringPTR = " << &stringPTR << WHITE  << std::endl;
	std::cout << BLUE << "Address of stringREF = " << &stringREF << WHITE  << std::endl << std::endl;
	std::cout << PURPLE << "str = " << str << WHITE  << std::endl;
	std::cout << CYAN << "stringPTR = " << *stringPTR << WHITE  << std::endl;
	std::cout << BLUE << "stringREF = " << stringREF << WHITE  << std::endl;

	return (0);
}