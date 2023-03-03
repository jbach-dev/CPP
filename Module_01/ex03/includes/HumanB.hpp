/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:22:54 by jbach             #+#    #+#             */
/*   Updated: 2022/10/18 17:23:25 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
#include <string>
#include "Weapon.hpp"
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

class HumanB {
public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif