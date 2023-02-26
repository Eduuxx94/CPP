/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:41:26 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 17:50:19 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(/* args */): AForm("PresidentialPardonForm", 5, 25, 0), _target("No target")
{
    std::cout << this->getName() << " default constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 5, 25, 0), _target(target)
{
    std::cout << this->getName() << " constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), _target(copy.getTarget())
{
    std::cout << this->getName() << " copy constructor called!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << this->getName() << " destructor called!" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
    return this->_target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!this->getSigned()) {
        throw PresidentialPardonFormExecException();
    }
    if (this->getRequiredExec() < executor.getGrade()) {
        throw PresidentialPardonFormFailException();
    }
    std::cout << getTarget() << "\033[0;32m has been pardoned by Zaphod Beeblebrox.\033[0m" << std::endl;
}

const char *PresidentialPardonForm::PresidentialPardonFormFailException::what() const throw() {
    return "\033[0;31mthe Zaphod Beeblebrox was not pardoned with that grade!\033[0m";
}

const char *PresidentialPardonForm::PresidentialPardonFormExecException::what() const throw() {
    return "\033[0;31mthe form needs to be signed! \033[0m";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    *this = this->operator=(rhs);
    return *this;
}
