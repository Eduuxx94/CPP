/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:40:40 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 15:47:35 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
    /* data */
    const std::string _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& copy);
    ~RobotomyRequestForm();
    std::string     getTarget() const;
    void            execute(const Bureaucrat& executor) const;

    RobotomyRequestForm&  operator=(const RobotomyRequestForm& rhs);

    class RobotomyRequestFormExecException : public std::exception {
        public:
            const char* what() const throw();
    };
    class RobotomyRequestFormFailException : public std::exception {
        public:
            const char* what() const throw();
    };
    /*class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };*/
};

#endif
