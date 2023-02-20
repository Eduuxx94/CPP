/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:31:57 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 11:24:04 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(/* args */) {
    this->type = "ice";
    std::cout << "Ice constructor called!" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor called!" << std::endl;
}

std::string const &Ice::getType() const {
    // TODO: insert return statement here
}

AMateria *Ice::clone() const {
    return nullptr;
}

void Ice::use(ICharacter &target) {
}
