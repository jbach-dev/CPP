/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:07:55 by jbach             #+#    #+#             */
/*   Updated: 2022/10/17 19:53:57 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <string>
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

class Zombie {
public:
	void	announce(void) const;
	std::string getName(void) const;
	Zombie(std::string name);
	~Zombie(void);

private:
	std::string	_name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);


#endif