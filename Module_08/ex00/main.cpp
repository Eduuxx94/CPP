/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:13:18 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/11 12:55:24 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> myint;// = {1, 2, 3, 4, 5};
    myint.push_back(1);
    myint.push_back(2);
    myint.push_back(3);
    myint.push_back(4);
    myint.push_back(5);
    std::list<std::string>  mylist;// = {"Hello", "World", "42", "Lisboa"};
    mylist.push_back("Hello");
    mylist.push_back("World");
    mylist.push_back("42");
    mylist.push_back("Lisboa");
    try {
        easyfind(myint, 1);
        easyfind(myint, -2);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        easyfind(mylist, "42");
        easyfind(mylist, "ahahaha");
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
