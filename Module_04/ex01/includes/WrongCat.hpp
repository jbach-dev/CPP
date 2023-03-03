/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:41:42 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 09:43:58 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
#include "Define.hpp"
#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat(void);
	WrongCat (WrongCat const & src);
	WrongCat &operator=(WrongCat const & rhs);
	void makeSound() const;
};

#endif