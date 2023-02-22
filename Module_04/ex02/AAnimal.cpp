/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:32 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 12:47:01 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("Unknow") {
    std::cout << "AAnimal Default constructor called!" << std::endl;
}

AAnimal::AAnimal(std::string type): type(type) {
    std::cout << "AAnimal type constructor called!" << std::endl;
}

void AAnimal::makeSound(void) const{
    std::cout << "Unknow sound ear" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy): type(copy.type) {
    std::cout << "AAnimal copy constructor called!" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << type << " Animal Destructor called!" << std::endl;
}

std::string AAnimal::getType(void) const {
    return this->type;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
    this->type = rhs.type;
    return *this;
}
