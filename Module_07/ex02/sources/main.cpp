/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/09 18:38:59 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#define MAX_VAL 750

//my main
int main(void)
{
    std::cout << GRN << "--- Tests constructeur sans param ---" << std::endl << RESET;
    Array<int> array_noParams;
    std::cout << GRN << "--- Tests constructeur avec param ---" << std::endl << RESET;
    Array<int> numbers(10);
    for (int i = 0; i < 10;i++)
    {
        numbers[i] = rand();
    }
    std::cout << GRN << "--- Tests constructeur par copie ---" << std::endl << RESET;
    try
    {
        Array<int> test(numbers);
        std::cout << YEL << "-- before change --" << RESET << std::endl;
        std::cout <<"numbers[4] = " << numbers[4] << RESET << std::endl;
        std::cout <<"test[4] = " << test[4] << RESET << std::endl;
        std::cout << YEL << "-- after change --" << RESET << std::endl;
        numbers[4] = 54;
        std::cout <<"numbers[4] = " << numbers[4] << RESET << std::endl;
        std::cout <<"test[4] = " << test[4] << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED <<  e.what() << std::endl << std::endl;
    }
    try
    {
        numbers[15] = 8;
    }
    catch(const std::exception& e)
    {
        std::cerr << std::endl << RED <<  e.what() << std::endl << std::endl;
    }
    std::cout << GRN << "--- Tests size ---" << std::endl << RESET;
    try
    {
        Array<int> five(5);
        Array<int> two(2);
        Array<int> fortytwo(42);
        std::cout <<"five = " << five.size() << RESET << std::endl;
        std::cout <<"two = " << two.size() << RESET << std::endl;
        std::cout <<"fortytwo = " << fortytwo.size() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << std::endl << RED <<  e.what() << std::endl << std::endl;
    }
}

//subject main
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     // SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }