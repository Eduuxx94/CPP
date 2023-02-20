/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:32:26 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 19:48:31 by ede-alme         ###   ########.fr       */
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
    ~Cure();
    std::string const & getType() const; //Returns the materia type
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif