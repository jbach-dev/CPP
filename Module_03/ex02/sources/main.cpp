/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:40:59 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 19:34:08 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << std::endl;
	FragTrap Aladdin("Aladdin");
	ClapTrap Jasmine("Jasmine");
	ScavTrap Abu("Abu");
	Abu.attack("Jasmine");
	Jasmine.takeDamage(20);
	Jasmine.beRepaired(1000);
	Aladdin.beRepaired(10);
	Aladdin.highFivesGuys();
	Abu.guardGate();
	return (1);
}