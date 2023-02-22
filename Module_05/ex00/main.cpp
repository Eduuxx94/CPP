/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:10:21 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 15:52:28 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat  a("Administrator", 1);
        a.incrementGrade();//It causes exception to high
    }
    catch (const std::exception& e) {
        std::cerr << "Exception catch: " << e.what() << std::endl;
    }
    Bureaucrat  c("New", 149);
    try {
        Bureaucrat  b("Administrator", 200);// It causes exception to low //It will stop here
        c.decrementGrade();// This will not be called!
    }
    catch (const std::exception& e) {
        std::cerr << "Exception catch: " << e.what() << std::endl;
    }
    try {
        Bureaucrat d = c;
        d.decrementGrade();
    }
    catch (const std::exception& e) {
        std::cerr << "Exception catch: " << e.what() << std::endl;
    }
}
