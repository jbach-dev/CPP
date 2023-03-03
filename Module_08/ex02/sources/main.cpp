/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/23 15:31:42 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutant.hpp"
#include <iostream>

//Testeur subject
int main()
{
	std::cout << std::endl << YEL << "--- My stack ---" << std::endl << std::endl << RESET;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(87);
	mstack.push(65);
	std::cout << "front = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout  << "size = "<< mstack.size() << std::endl;
	mstack.push(85);
	mstack.push(5);
	mstack.push(737);
	mstack.push(152);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	MutantStack<int>::reverse_iterator rs_it;
	MutantStack<int>::reverse_iterator rs_ite = mstack.rend();
	std::cout << std::endl << "***" << std::endl;
	for (rs_it = mstack.rbegin(); rs_it != rs_ite; ++rs_it)
	{
		std::cout << *rs_it << std::endl;
	}
	std::cout << std::endl << YEL << "--- Test with list ---" << std::endl << std::endl << RESET;
	std::list<int> slist;
	slist.push_back(5);
	slist.push_back(17);
	slist.push_back(87);
	slist.push_back(65);
	std::cout << "front = "<<slist.back() << std::endl;
	slist.pop_back();
	std::cout << "size = " << slist.size() << std::endl;
	slist.push_back(85);
	slist.push_back(5);
	slist.push_back(737);
	slist.push_back(152);
	std::list<int>::iterator it_list = slist.begin();
	std::list<int>::iterator ite_list = slist.end();
	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
	std::cout <<  *it_list << std::endl;
	++it_list;
	}
	std::list<int> l(slist);
	std::list<int>::reverse_iterator rl_it;
	std::list<int>::reverse_iterator rl_ite = slist.rend();
	std::cout << std::endl << "***" << std::endl;
	for (rl_it = slist.rbegin(); rl_it != rl_ite; ++rl_it)
	{
		std::cout << *rl_it << std::endl;
	}
	return 0;
}