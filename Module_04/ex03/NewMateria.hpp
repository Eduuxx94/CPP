/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:32:26 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 10:25:20 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWMATERIA_HPP
#define NEWMATERIA_HPP
#include "AMateria.hpp"

class NewMateria: public AMateria
{
private:
    /* data */
public:
    NewMateria(const std::string type);
    NewMateria(const NewMateria& copy);
    ~NewMateria();
    std::string const & getType() const; //Returns the materia type
    AMateria* clone() const;
    void use(ICharacter& target);
    NewMateria& operator=(const NewMateria& rhs);
};

#endif