/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:31:57 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 17:21:48 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(/* args */): AMateria("ice") {
    std::cout << "Ice constructor called!" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor called!" << std::endl;
}

std::string const &Ice::getType() const {
    return this->type;
}

AMateria *Ice::clone() const {
    Ice* clone = new Ice();
    return clone;
}

void Ice::use(ICharacter &target) {
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}
