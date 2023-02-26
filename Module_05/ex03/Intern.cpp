/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:10:52 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 21:25:07 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(/* args */) {
    std::cout << "Intern default constructor called!" << std::endl;
}

Intern::Intern(const Intern &copy) {
    std::cout << "Intern copy constructor called!" << std::endl;
    (void)copy;
}

Intern::~Intern() {
    std::cout << "Intern destructor called!" << std::endl;
}

AForm *Intern::makeForm(const std::string form, const std::string target) {
    std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int index = 0;

    for (int i = 0; i < 3; i++) {
        if (form == forms[i]) {
            break ;
        }
        index = i + 1;
    }
    switch (index)
    {
    case 0:
        return new RobotomyRequestForm(target);    
    case 1:
        return new PresidentialPardonForm(target);
    case 2:
        return new ShrubberyCreationForm(target);
    default:
        throw InternException();
    }
}

const char *Intern::InternException::what() const throw() {
    return "\033[0;31mNo Form was found with that name!\033[0m";
}

Intern &Intern::operator=(const Intern &rhs) {
    (void)rhs;
    return *this;
}
