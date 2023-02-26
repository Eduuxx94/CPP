/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:41:26 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 14:34:27 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */): AForm("ShrubberyCreationForm", 137, 145, 0), _target("No target"),
_tree("        _-_\\ \n     /~~   ~~\\ \n  /~~         ~~\\ \n {               }\\ \n  \\  _-     -_  / \n    ~  \\\\ //  ~ \n _- -   | | _- _ \n   _ -  | |   -_ \n       // \\\\ \n")
{
    std::cout << this->getName() << " default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("ShrubberyCreationForm", 137, 145, 0), _target(target),
_tree("        _-_\\ \n     /~~   ~~\\ \n  /~~         ~~\\ \n {               }\\ \n  \\  _-     -_  / \n    ~  \\\\ //  ~ \n _- -   | | _- _ \n   _ -  | |   -_ \n       // \\\\ \n") 
{
    std::cout << this->getName() << " constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm(copy), _target(copy.getTarget()), _tree(copy._tree) {
    std::cout << this->getName() << " copy constructor called!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << this->getName() << " destructor called!" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
    return this->_target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (!this->getSigned()) {
        throw ShrubberyCreationFormExecException();
    }
    if (this->getRequiredExec() < executor.getGrade()) {
        throw GradeTooLowException();
    }
    std::ofstream file(std::string(_target + "_shrubbery").c_str());
    file << this->_tree;
    file.close();
}

const char *ShrubberyCreationForm::ShrubberyCreationFormExecException::what() const throw() {
    return (std::string("\033[0;31the form needs to be signed! \033[0m")).c_str();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    *this = this->operator=(rhs);
    return *this;
}
