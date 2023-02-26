/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:41:26 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 17:35:35 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(/* args */): AForm("RobotomyRequestForm", 45, 72, 0), _target("No target")
{
    std::cout << this->getName() << " default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 45, 72, 0), _target(target)
{
    std::cout << this->getName() << " constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy.getTarget())
{
    std::cout << this->getName() << " copy constructor called!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << this->getName() << " destructor called!" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    std::cout << "Vrrrrrrr.... Vrrrrrrr.... Vrrrrrrr...." << std::endl;
    if (!this->getSigned()) {
        throw RobotomyRequestFormExecException();
    }
    if (this->getRequiredExec() < executor.getGrade()) {
        throw GradeTooLowException();
    }
    std::srand(std::time(0));
    if (std::rand() % 2) {
        throw RobotomyRequestFormFailException();
    }
    std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
}

const char *RobotomyRequestForm::RobotomyRequestFormFailException::what() const throw() {
    return "\033[0;31mThe Robot has 50\% chance to executing successfully, so it failed!\033[0m";
}

const char *RobotomyRequestForm::RobotomyRequestFormExecException::what() const throw() {
    return "\033[0;31mthe form needs to be signed! \033[0m";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    *this = this->operator=(rhs);
    return *this;
}
