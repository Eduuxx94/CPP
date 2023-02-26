/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:10:21 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 18:00:20 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        ShrubberyCreationForm berry("Berry");
        RobotomyRequestForm robot("Auto");
        PresidentialPardonForm elite("Elite");
        Bureaucrat jonh("Jonh", 7);

        std::cout << std::endl << std::endl << "\033[0;33mStart some tests:____\033[0m" << std::endl;
        jonh.executeForm(berry);
        jonh.signForm(berry);
        jonh.executeForm(berry);
        jonh.executeForm(robot);
        jonh.signForm(robot);
        jonh.executeForm(robot);
        jonh.executeForm(elite);
        jonh.signForm(elite);
        jonh.executeForm(elite);
        std::cout << "\033[0;33m____Finish Tests\033[0m" << std::endl << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception in main catch: " << e.what() << std::endl;
    }
}
