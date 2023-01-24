/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:07:54 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/23 21:25:50 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    //A string variable initialized to "HI THIS IS BRAIN".->
    std::string brain = "HI THIS IS BRAIN";
    //stringPTR: A pointer to the string.->
    std::string* brainPTR = &brain;
    //stringREF: A reference to the string.->
    std::string& brainREF = brain;
    std::cout << std::endl;
    //The memory address of the string variable.->
    std::cout << &brain << std::endl;
    //The memory address held by stringPTR.
    std::cout << &brainPTR << std::endl;
    //The memory address held by stringREF.->
    std::cout << &brainREF << std::endl;
    std::cout << std::endl;
    //The value of the string variable.->
    std::cout << brain << std::endl;
    //The value pointed to by stringPTR.->
    std::cout << *brainPTR << std::endl;
    //The value pointed to by stringREF.->
    std::cout << brainREF << std::endl;
}
