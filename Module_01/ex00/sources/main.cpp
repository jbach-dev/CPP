/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:14:25 by jbach             #+#    #+#             */
/*   Updated: 2022/10/10 18:16:30 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*Sam;
	Zombie	*Clover;
	Sam = newZombie("Sam");
	Clover = newZombie("Clover");
	Sam->announce();
	Clover->announce();
	randomChump("Alex");
	delete Sam;
	delete Clover;
	return (1);
}
