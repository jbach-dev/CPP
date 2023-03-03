/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:10:53 by jbach             #+#    #+#             */
/*   Updated: 2022/10/18 17:43:55 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO: un programme qui prend 3 params (nom fichier, s1, s2):
// 2. ouvrir le fichier <filename>  et copier le contenu dans <filename>.replace
// 3. Chaque occurance de s1 sera remplacee par s2
// 4. Gestion erreur

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "Replace need 4 arguments" << std::endl << WHITE;
		return (0);
	}
	replace(argv[1], argv[2], argv[3]);
}

// int main()
// {
// 	main_tester();
// }