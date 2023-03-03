/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:13:31 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 10:14:58 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H
#include "Define.hpp"
#include <string>
#include <iostream>

class AAnimal {
public:
	AAnimal();
	virtual ~AAnimal(void);
	AAnimal (AAnimal const & src);
	AAnimal &operator=(AAnimal const & rhs);
	virtual void makeSound() const = 0;
	std::string	getType(void) const;

protected:
	std::string _type;
};

#endif