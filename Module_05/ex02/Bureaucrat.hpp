/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:08:18 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 14:29:26 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class AForm;

class Bureaucrat
{
private:
    const std::string   _name;
    int                 _grade;
    Bureaucrat(/* args */);
    void    checkExceptions(int grade);
public:
    Bureaucrat(const std::string name, const int grade);
    Bureaucrat(const Bureaucrat& copy);
    ~Bureaucrat();
    const std::string   getName() const;
    int           getGrade() const;
    void    incrementGrade();
    void    decrementGrade();
    void    signForm(AForm& form);
    void    executeForm(AForm const & form);
    Bureaucrat& operator=(const Bureaucrat& rhs);

    class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& i);

#endif
