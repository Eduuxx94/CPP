/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:41:48 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 17:19:37 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    type = "Animal";
    std::cout << getType() << " Constructor called!" << std::endl;
}

Animal::~Animal() {
    std::cout << getType() << " Destructor called!" << std::endl;
}

std::string Animal::getType(void) const {
    return type;
}

void Animal::makeSound(void) const {
    std::cout << "Animal Sound" << std::endl;
}
