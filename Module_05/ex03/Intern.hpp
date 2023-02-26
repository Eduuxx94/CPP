/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:11:52 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/26 21:22:21 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>

class AForm;

class Intern
{
private:
    /* data */
public:
    Intern(/* args */);
    Intern(const Intern& copy);
    ~Intern();

    AForm* makeForm(const std::string form, const std::string target);
    
    Intern& operator=(const Intern& rhs);

    class InternException : public std::exception {
        public:
            const char* what() const throw();
    };
};

#endif
