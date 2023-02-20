/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:32:23 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 17:28:17 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */): AMateria("cure") {
    std::cout << "Ice constructor called!" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor called!" << std::endl;
}

std::string const &Cure::getType() const {
    return this->type;
}

AMateria *Cure::clone() const
{
    Cure*   clone = new Cure();

    return clone;
}

void Cure::use(ICharacter &target) {
    std::cout << " heals " << target.getName() << "'s wounds" << std::endl;
}
