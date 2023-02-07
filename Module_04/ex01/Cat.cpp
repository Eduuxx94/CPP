/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:42:20 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 17:17:23 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    type = "Cat";
    std::cout << getType() << " Constructor called!" << std::endl;
}

Cat::~Cat() {
    std::cout << getType() << " Destructor called!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow ^.^" << std::endl;
}

std::string Cat::getType(void) const {
    return type;
}
