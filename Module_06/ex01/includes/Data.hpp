/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:15:31 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 16:28:00 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_H
# define DATA_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <stdint.h>


struct Data{
	int myNb;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif