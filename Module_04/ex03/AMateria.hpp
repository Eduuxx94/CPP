/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:30:03 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 10:59:58 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

/*A pure Abstract class has only abstract member functions and no data or concrete member
functions. In general, a pure abstract class is used to define an interface and is intended
to be inherited by concrete classes. It's a way of forcing a contract between the class designer
and the users of that class. The users of this class must declare a matching member function for the class to compile.*/

class AMateria
{
protected:
    std::string type;
public:
    AMateria(std::string const &type);
    AMateria(const AMateria& copy);
    virtual ~AMateria();
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    AMateria&   operator=(const AMateria& rhs);
};

#endif
