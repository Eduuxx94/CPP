/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:08:18 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 22:51:54 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Form;

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
    void    signForm(Form& form);
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
