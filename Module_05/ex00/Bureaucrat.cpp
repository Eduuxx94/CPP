/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:08:06 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 15:57:30 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */): _name("Test"), _grade(75) {
    std::cout << "Default Bureaucrat constructor called!" << std::endl;
    checkExceptions(_grade);
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name), _grade(grade) {
    std::cout << "Bureaucrat constructor called!" << std::endl;
    checkExceptions(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName()), _grade(copy.getGrade()) {
    std::cout << "Bureaucrat copy constructor called!" << std::endl;
    checkExceptions(_grade);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called!" << std::endl;
}

const std::string Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

void Bureaucrat::incrementGrade() {
    checkExceptions(_grade - 1);
    std::cout << *this << std::endl;
}

void Bureaucrat::decrementGrade() {
    checkExceptions(_grade + 1);
    std::cout << *this << std::endl;
}

void Bureaucrat::checkExceptions(int grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    }
    else if (grade > 150) {
        throw GradeTooLowException();
    }
    _grade = grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    std::string& temp = const_cast<std::string&>(_name);
    temp = rhs.getName();
    this->_grade = rhs.getGrade();
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i)
{
    return ((o << i.getName() << ", bureaucrat grade " << i.getGrade()));
}
