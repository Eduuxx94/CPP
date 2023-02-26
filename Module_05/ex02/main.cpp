/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:10:21 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 14:37:18 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    try {
        ShrubberyCreationForm form("New");
        Bureaucrat joao("joao", 137);
        joao.signForm(form);
        joao.executeForm(form);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception in main catch: " << e.what() << std::endl;
    }
}
