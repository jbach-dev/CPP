/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:17 by jbach             #+#    #+#             */
/*   Updated: 2022/10/20 18:21:13 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Define.hpp"

void	testeur_subject(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

int main( void ) {
	Fixed sup(20 );
	Fixed const const1(20 );
	Fixed const const2(5.5f );
	Fixed inf(10);
	Fixed equal1(3.5f);
	Fixed equal2(3.5f);
	testeur_subject();
	std::cout<< std::endl<< BWHT << "----------------" << std::endl  << std::endl << WHITE;

	std::cout << CYAN << "Testeur    >" << std::endl << WHITE;
	if (sup > inf)
		std::cout << CYAN << "sup = " << sup << "; inf = " << inf << std::endl << std::endl << WHITE;
	
	std::cout << CYAN << "Testeur    <" << std::endl << WHITE;
	if (inf < sup)
		std::cout<< CYAN << "inf = " << inf << "; sup = " << sup << std::endl  << std::endl << WHITE;
	
	std::cout << CYAN << "Testeur    >=" << std::endl << WHITE;
	if (sup >= inf)
		std::cout<< CYAN << "inf = " << inf << "; sup = " << sup << std::endl  << std::endl << WHITE;

	std::cout << CYAN << "Testeur    <=" << std::endl << WHITE;
	if (inf <= sup)
		std::cout<< CYAN << "inf = " << inf << "; sup = " << sup << std::endl  << std::endl << WHITE;

	std::cout << CYAN << "Testeur    ==" << std::endl << WHITE;
	if (equal1 == equal2)
		std::cout<< CYAN << "equal1 = " << equal1 << "; equal2 = " << equal2 << std::endl  << std::endl << WHITE;

	std::cout << CYAN << "Testeur    !=" << std::endl << WHITE;
	if (inf != sup)
		std::cout<< CYAN << "inf = " << inf << "; sup = " << sup << std::endl  << std::endl << WHITE;

	std::cout<< BWHT << "----------------" << std::endl  << std::endl << WHITE;

	std::cout << GRN << "Testeur    +" << std::endl << WHITE;
		std::cout<< GRN << inf + sup << std::endl  << std::endl << WHITE;
	
	std::cout << GRN << "Testeur    -" << std::endl << WHITE;
		std::cout<< GRN << inf - sup << std::endl  << std::endl << WHITE;

	std::cout << GRN << "Testeur    *" << std::endl << WHITE;
		std::cout<< GRN << inf * sup << std::endl  << std::endl << WHITE;

	std::cout << GRN << "Testeur    /" << std::endl << WHITE;
		std::cout<< GRN << inf / sup << std::endl  << std::endl << WHITE;

	std::cout<< BWHT << "----------------" << std::endl  << std::endl << WHITE;
	
	std::cout << BLUE << "Testeur    min" << std::endl << WHITE;
		std::cout<< BLUE << Fixed::min(sup, inf) << std::endl  << std::endl << WHITE;

	std::cout << BLUE << "Testeur    min const" << std::endl << WHITE;
		std::cout<< BLUE << Fixed::min(const1, const2) << std::endl  << std::endl << WHITE;

	std::cout << BLUE << "Testeur    max" << std::endl << WHITE;
		std::cout<< BLUE << Fixed::max(sup, inf) << std::endl  << std::endl << WHITE;

	std::cout << BLUE << "Testeur    const max" << std::endl << WHITE;
		std::cout<< BLUE << Fixed::max(const1, const2) << std::endl  << std::endl << WHITE;

	return 0;
}