/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:40:40 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 17:39:59 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
    /* data */
    const std::string _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& copy);
    ~PresidentialPardonForm();
    std::string     getTarget() const;
    void            execute(const Bureaucrat& executor) const;

    PresidentialPardonForm&  operator=(const PresidentialPardonForm& rhs);

    class PresidentialPardonFormFailException : public std::exception {
        public:
            const char* what() const throw();
    };
    class PresidentialPardonFormExecException : public std::exception {
        public:
            const char* what() const throw();
    };
};

#endif
