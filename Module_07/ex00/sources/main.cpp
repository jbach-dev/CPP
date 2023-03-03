/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/09 18:35:40 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main(void)
{
	std::cout << YEL << "--- SWAP ---" << std::endl << std::endl;
	int a = 21;
	int b = 42;
	swap<int>(a,b);

	float c = -1.7f;
	float d = 4.2;
	swap<float>(c,d);

	char e = 'a';
	char f = 'z';
	swap<char>(e,f);

	std::cout << std::endl << YEL << "--- MIN ---" << std::endl << std::endl;
	double g = 175.88;
	double h = 175.88;
	min<int>(a,b);
	min<int>(b,a);
	min<float>(c,d);
	min<char>(e,f);
	min<double>(g,h);

	std::cout << std::endl << YEL << "--- MAX ---" << std::endl << std::endl;
	max<int>(a,b);
	max<int>(b,a);
	max<float>(c,d);
	max<char>(e,f);
	max<double>(g,h);

	return 0;
}

//TESTEUR Subject
// int main( void ) 
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }