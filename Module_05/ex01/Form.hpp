/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:23:17 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 23:28:42 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
# include <iostream>

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    const int           _RequiredGradeExec;
    const int           _RequiredGradeSign;
    bool                _signed;
    Form(/* args */);
    void    checkExceptions(int exec);
    void    checkSignExceptions(int sign);
public:
    Form(const std::string name, const int exec, const int sign, bool _sign);
    Form(const Form& copy);
    ~Form();
    const std::string   getName() const;
    bool                getSigned() const;
    int           getRequiredSign() const;
    int           getRequiredExec() const;
    void                beSigned(Bureaucrat& bureaucrat);
    Form& operator=(const Form& rhs);

    class FormSignedException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& o, const Form& i);

#endif
