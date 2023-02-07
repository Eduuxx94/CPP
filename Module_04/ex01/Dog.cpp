/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:44:19 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 17:17:14 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    type = "Dog";
    std::cout << getType() << " Constructor called!" << std::endl;
}

Dog::~Dog() {
    std::cout << getType() << " Destructor called!" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof <o_o>" << std::endl;
}

std::string Dog::getType(void) const {
    return type;
}
