/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:41:10 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 09:42:22 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
#include "Define.hpp"
#include <string>
#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	virtual ~WrongAnimal(void);
	WrongAnimal (WrongAnimal const & src);
	WrongAnimal &operator=(WrongAnimal const & rhs);
	void makeSound() const;
	std::string	getType(void) const;


protected:
	std::string _type;
};

#endif