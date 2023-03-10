/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:31:17 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 10:41:18 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice: public AMateria
{
private:
    /* data */
public:
    Ice(/* args */);
    Ice(const Ice& copy);
    ~Ice();
    std::string const & getType() const; //Returns the materia type
    AMateria* clone() const;
    void use(ICharacter& target);
    Ice&    operator=(const Ice& rhs);
};

#endif