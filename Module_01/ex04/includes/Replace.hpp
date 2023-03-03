/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:19:16 by jbach             #+#    #+#             */
/*   Updated: 2022/10/17 19:28:48 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
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

void	replace(std::string filename, std::string s1,std::string s2);
void	main_tester();

#endif