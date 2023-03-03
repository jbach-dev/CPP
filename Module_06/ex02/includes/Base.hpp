/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:09:16 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 17:56:21 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <cstdlib>

class Base {
public:
	virtual ~Base(void);
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif