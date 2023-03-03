/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutant.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:39 by jbach             #+#    #+#             */
/*   Updated: 2022/11/23 15:23:36 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_H
# define MUTANT_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
#include <iterator>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack<T>(void) : std::stack<T>()
		{
		};
		MutantStack<T>(MutantStack const & src)
		{
			*this = src;
		};
		~MutantStack<T>(void){
		};
		MutantStack<T> &operator=(MutantStack const & rhs)
		{
			(void) rhs;
			return *this;
		};
		typedef std::stack<int>::container_type::iterator iterator;
		iterator begin()
		{
			return (std::stack<T>::c.begin());
		};
		iterator end()
		{
			return (std::stack<T>::c.end());
		};
		typedef std::stack<int>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin()
		{
			return (std::stack<T>::c.rbegin());
		};
		reverse_iterator rend()
		{
			return (std::stack<T>::c.rend());
		};
};


#endif
