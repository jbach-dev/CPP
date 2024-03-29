/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:08:14 by jbach             #+#    #+#             */
/*   Updated: 2022/10/18 17:04:47 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int nbofzombies = 5;
	Zombie	*myHorde = zombieHorde(nbofzombies, "micheal");
	for (int i = 0; i < nbofzombies; i++)
		myHorde[i].announce();
	delete [] myHorde;
	return (1);
}
