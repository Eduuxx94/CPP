/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:25:27 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/07 22:44:11 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
/*
int main() {

    std::cout<< std::endl << "\033[0;32mStarting test for int array:\033[0m" << std::endl;
    Array<int>   a(6);

    try {
        a[0] = 0;
        a[1] = 12;
        std::cout << a[0] << std::endl << a[1] << std::endl;
        std::cout << "Size of array: " << a.size() << std::endl;
        a[2] = 12;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\033[0;32mStarting test for string array:\033[0m" << std::endl;
    Array<std::string>   b(2);
    
    try {
        b[0] = "Hello ";
        b[1] = "World!";
        std::cout << b[0] << b[1] << std::endl;
        std::cout << "Size of array: " << b.size() << std::endl;
        b[2] = "Trying to buffer overflow attack!";
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "End of Tests." << std::endl << std::endl;
}*/
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}