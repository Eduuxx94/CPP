/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:32:13 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 12:04:49 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(/* args */): _name("Test"), _RequiredGradeExec(75), _RequiredGradeSign(75), _signed(0) {
    std::cout << this->getName() << " AForm Default constructor called!" << std::endl;
    try {
        checkExceptions(_RequiredGradeSign);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Sign catch: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
    try {
        checkExceptions(_RequiredGradeExec);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Exec catch: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
}

AForm::AForm(const std::string name, const int exec, const int sign, bool _sign): _name(name), _RequiredGradeExec(exec), _RequiredGradeSign(sign), _signed(_sign) {
    std::cout << this->getName() << " AForm constructor called!" << std::endl;
    try {
        checkExceptions(_RequiredGradeSign);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Sign catch: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
    try {
        checkExceptions(_RequiredGradeExec);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Exec catch: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
}

AForm::AForm(const AForm &copy): _name(copy.getName()), _RequiredGradeExec(copy.getRequiredExec()), _RequiredGradeSign(copy.getRequiredSign()), _signed(copy.getSigned())  {
    std::cout << this->getName() << " AForm copy constructor called!" << std::endl;
    try {
        checkExceptions(_RequiredGradeSign);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Sign catch: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
    try {
        checkExceptions(_RequiredGradeExec);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception Exec catch: " << e.what() << std::endl;
        throw; // re-throw the caught exception
    }
}

AForm::~AForm() {
    std::cout << this->getName() << " AForm destructor called!" << std::endl;
}

const std::string AForm::getName(void) const {
    return this->_name;
}

bool AForm::getSigned() const {
    return this->_signed;
}

int AForm::getRequiredSign() const{
    return this->_RequiredGradeSign;
}

int AForm::getRequiredExec() const{
    return this->_RequiredGradeExec;
}

void AForm::checkExceptions(int grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    }
    else if (grade > 150) {
        throw GradeTooLowException();
    }
}

void AForm::checkSignExceptions(int sign) {
    if (this->_signed) {
        throw AFormSignedException();
    }
    else if (sign < 1) {
        throw GradeTooHighException();
    }
    else if (sign >= _RequiredGradeSign) {
        throw GradeTooLowException();
    }
    this->_signed = 1;
}

AForm &AForm::operator=(const AForm &rhs) {
    std::string& name = const_cast<std::string&>(_name);
    name = rhs.getName();
    int& exec = const_cast<int&>(_RequiredGradeExec);
    exec = rhs.getRequiredExec();
    int& sign = const_cast<int&>(_RequiredGradeSign);
    sign = rhs.getRequiredSign();
    this->_signed = rhs.getSigned();
    return *this;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    try {
        checkSignExceptions(bureaucrat.getGrade());
    }
    catch (const std::exception& e) {
        throw; // re-throw the caught exception  if this is active will stop code in main if inside try
    }
}

const char *AForm::AFormSignedException::what() const throw() {
    return "\033[0;31mAForm is already Signed!\033[0m";
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "\033[0;31mGrade is too high \033[0m";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "\033[0;31mGrade is too low \033[0m";
}

std::ostream &operator<<(std::ostream &o, const AForm &i)
{
    if (i.getSigned()) {
        return (o << i.getName() << " is Signed!" << std::endl);
    }
    else {
        return ((o << i.getName() << " AForm Requesites:" << std::endl << "AForm Grade to Execute: " << i.getRequiredExec() << std::endl << "Form Grade to Sign: " << i.getRequiredSign() << std::endl));
    }
}
