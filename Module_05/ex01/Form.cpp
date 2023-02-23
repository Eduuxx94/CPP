/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:32:13 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/23 18:51:38 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(/* args */): _name("Test"), _RequiredGradeExec(75), _RequiredGradeSign(75), _signed(0) {
    std::cout << this->getName() << " Form Default constructor called!" << std::endl;
    try {
        checkExceptions(_RequiredGradeSign);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Sign catch: " << e.what() << std::endl;
    }
    try {
        checkExceptions(_RequiredGradeExec);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Exec catch: " << e.what() << std::endl;
    }
}

Form::Form(const std::string name, const int exec, const int sign, bool _sign): _name(name), _RequiredGradeExec(exec), _RequiredGradeSign(sign), _signed(_sign) {
    std::cout << this->getName() << " Form constructor called!" << std::endl;
    try {
        checkExceptions(_RequiredGradeSign);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Sign catch: " << e.what() << std::endl;
    }
    try {
        checkExceptions(_RequiredGradeExec);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Exec catch: " << e.what() << std::endl;
    }
}

Form::Form(const Form &copy): _name(copy.getName()), _RequiredGradeExec(copy.getRequiredExec()), _RequiredGradeSign(copy.getRequiredSign()), _signed(copy.getSigned())  {
    std::cout << this->getName() << " Form copy constructor called!" << std::endl;
    try {
        checkExceptions(_RequiredGradeSign);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Sign catch: " << e.what() << std::endl;
    }
    try {
        checkExceptions(_RequiredGradeExec);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Exec catch: " << e.what() << std::endl;
    }
}

Form::~Form() {
    std::cout << this->getName() << " Form destructor called!" << std::endl;
}

const std::string Form::getName(void) const {
    return this->_name;
}

bool Form::getSigned() const {
    return this->_signed;
}

int Form::getRequiredSign() const{
    return this->_RequiredGradeSign;
}

int Form::getRequiredExec() const{
    return this->_RequiredGradeExec;
}

void Form::checkExceptions(int exec) {
    if (exec < 1) {
        throw GradeTooHighException();
    }
    else if (exec > 150) {
        throw GradeTooLowException();
    }
}

void Form::checkSignExceptions(int sign) {
    if (this->_signed) {
        throw FormSignedException();
    }
    else if (sign < 1) {
        throw GradeTooHighException();
    }
    else if (sign >= _RequiredGradeSign) {
        throw GradeTooLowException();
    }
    this->_signed = 1;
}

Form &Form::operator=(const Form &rhs) {
    std::string& name = const_cast<std::string&>(_name);
    name = rhs.getName();
    int& exec = const_cast<int&>(_RequiredGradeExec);
    exec = rhs.getRequiredExec();
    int& sign = const_cast<int&>(_RequiredGradeSign);
    sign = rhs.getRequiredSign();
    this->_signed = rhs.getSigned();
    return *this;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    try {
        checkSignExceptions(bureaucrat.getGrade());
    }
    catch (const std::exception& e) {
        //std::cerr << "Exception Catch when Bureaucrat try to Sign Form: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
}

const char *Form::FormSignedException::what() const throw() {
    return "\033[0;31mForm is already Signed!\033[0m";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "\033[0;31mGrade is too high \033[0m";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "\033[0;31mGrade is too low \033[0m";
}

std::ostream &operator<<(std::ostream &o, const Form &i)
{
    if (i.getSigned()) {
        return (o << i.getName() << " is Signed!" << std::endl);
    }
    else {
        return ((o << i.getName() << " Form Requesites:" << std::endl << "Form Grade to Execute: " << i.getRequiredExec() << std::endl << "Form Grade to Sign: " << i.getRequiredSign() << std::endl));
    }
}
