/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:19:59 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 16:35:40 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data* deserialize(uintptr_t raw)
{
	Data *test;
	test = reinterpret_cast<Data *>(raw);
	return (test);
}
