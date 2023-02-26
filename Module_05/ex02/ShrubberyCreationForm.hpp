/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:40:40 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 14:25:56 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
    /* data */
    const std::string _target;
    const std::string _tree;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& copy);
    ~ShrubberyCreationForm();
    std::string     getTarget() const;
    void            execute(const Bureaucrat& executor) const;

    ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& rhs);

    class ShrubberyCreationFormExecException : public std::exception {
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
