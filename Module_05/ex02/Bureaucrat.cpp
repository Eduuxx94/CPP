/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:08:06 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 14:39:38 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(/* args */): _name("Test"), _grade(75) {
    try {
        std::cout << this->getName() << " Bureaucrat Default constructor called!" << std::endl;
        checkExceptions(_grade);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception catch on construtor: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name), _grade(grade) {
     try {
        std::cout << this->getName() << " Bureaucrat constructor called!" << std::endl;
        checkExceptions(_grade);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception catch on construtor: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName()), _grade(copy.getGrade()) {
     try {
        std::cout << this->getName() << " Bureaucrat copy constructor called!" << std::endl;
        checkExceptions(_grade);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception catch on construtor: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
}

Bureaucrat::~Bureaucrat() {
    std::cout << this->getName() << " Bureaucrat destructor called!" << std::endl;
}

const std::string Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

void Bureaucrat::incrementGrade() {
    try {
        checkExceptions(_grade - 1);
        std::cout << *this << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception catch: " << e.what() << std::endl;
    }
}

void Bureaucrat::decrementGrade() {
    try {
        checkExceptions(_grade + 1);
        std::cout << *this << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception catch: " << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) {
    try {
        form.execute(*this);
        std::cout << getName() << " \033[0;32mexecuted " << form.getName() << "\033[0m" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
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
    return "\033[0;31mGrade is too high \033[0m";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "\033[0;31mGrade is too low \033[0m";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i)
{
    return ((o << i.getName() << ", bureaucrat grade " << i.getGrade()));
}
