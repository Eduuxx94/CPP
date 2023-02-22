/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:32:26 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 10:44:02 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure: public AMateria
{
private:
    /* data */
public:
    Cure(/* args */);
    Cure(const Cure& copy);
    ~Cure();
    std::string const & getType() const; //Returns the materia type
    AMateria* clone() const;
    void use(ICharacter& target);
    Cure&   operator=(const Cure& rhs);
};

#endif