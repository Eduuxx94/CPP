/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:10:21 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 19:07:14 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    std::cout << std::endl << std::endl << "\033[0;33m Starting some Tests: \033[0m" << std::endl;
    Bureaucrat  wrongInput("wrongInput", 0);//It will cacth exception   //Input to high
    Bureaucrat  wrongIncrement("wrongIncrement", 1);
    wrongIncrement.incrementGrade();//It will cacth exception           //Increment to high
    std::cout << std::endl << std::endl << "\033[0;33m Tests for loop: \033[0m" << std::endl;
    Bureaucrat  loopBureaucrat("loopBureaucrat", 5);
    for (int i = 0; i < 6; i++) {
        loopBureaucrat.incrementGrade();//Last two increment will fail  //increment to high
    }
    loopBureaucrat.decrementGrade();//This will succeed because grade still: 1
    std::cout << "\033[0;33m Tests done... \033[0m" << std::endl << std::endl; 
}
