/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:23:17 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 12:08:35 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
# include <iostream>

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    const int           _RequiredGradeExec;
    const int           _RequiredGradeSign;
    bool                _signed;
    AForm(/* args */);
public:
    AForm(const std::string name, const int exec, const int sign, bool _sign);
    AForm(const AForm& copy);
    virtual ~AForm() = 0;
    const std::string   getName() const;
    bool                getSigned() const;
    int                 getRequiredSign() const;
    int                 getRequiredExec() const;
    void                beSigned(Bureaucrat& bureaucrat);
    void                checkExceptions(int grade);
    void                checkSignExceptions(int sign);
    virtual void                execute(const Bureaucrat& executor) const = 0;
    AForm& operator=(const AForm& rhs);

    class AFormSignedException : public std::exception {
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

std::ostream& operator<<(std::ostream& o, const AForm& i);

#endif
