/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:20:57 by jbach             #+#    #+#             */
/*   Updated: 2022/10/18 17:42:08 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void	replace(std::string filename, std::string s1,std::string s2)
{
	if (filename.empty() || s1.empty())
	{
		std::cout << RED << "You need to have a filename and a string s1" << std::endl << std::endl << WHITE;
		return ;
	}
	std::string new_filename;
	new_filename = filename;
	new_filename.append(".replace");
	std::ifstream infile(filename.c_str());
	std:: string line;
	int begin = 0;
	int change = 0;
	if (infile.is_open())
	{
		std::ofstream new_file(new_filename.c_str());
		while ( std::getline (infile,line) )
		{
			std::string str_tmp;
			str_tmp = line;
			begin = line.find(s1);
			if (begin > 0)
			{
				line = str_tmp.substr(0, begin);
				line.append(s2.c_str());
				begin += std::strlen(s1.c_str());
				line.append(str_tmp.substr(begin));
				change += 1;
			}
			new_file << line << std::endl;
		}
	if (change == 0)
		std::cout << RED << "No occurance were find" << std::endl << std::endl << WHITE;
	else
		std::cout << GRN << "Your new file is ready" << std::endl << std::endl << WHITE;
	infile.close();
	new_file.close();
	}
	else
		std::cout  << RED << "Unable to open file" << std::endl << std::endl << WHITE;

}