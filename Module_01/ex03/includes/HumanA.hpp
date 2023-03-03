/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:22:48 by jbach             #+#    #+#             */
/*   Updated: 2022/10/17 15:43:32 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
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

class HumanA {
public:
	HumanA(std::string name, Weapon &Weapon);
	~HumanA(void);
	void	attack(void) const;

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif