/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:10:21 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/23 18:49:48 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Form        form("Form", 150, 70, 0);
    Bureaucrat  jonh("Jonh", 70);
    Bureaucrat  lucky("Lucky", 1);
    std::cout << std::endl << "\033[0;33m Starting some Tests: \033[0m" << std::endl;
    std::cout << form << std::endl;
    jonh.signForm(form);
    jonh.decrementGrade();
    jonh.signForm(form);
    jonh.incrementGrade();
    jonh.incrementGrade();
    jonh.signForm(form);
    jonh.signForm(form);
    lucky.signForm(form);
    std::cout << form << std::endl;
    std::cout << "\033[0;33m Tests done... \033[0m" << std::endl << std::endl;
}
