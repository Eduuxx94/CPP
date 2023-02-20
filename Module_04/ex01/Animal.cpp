/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:32 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/17 17:55:53 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */): type("Unknow") {
    std::cout << "Animal Default constructor called!" << std::endl;
}

Animal::Animal(std::string type): type(type) {
    std::cout << "Animal type constructor called!" << std::endl;
}

Animal::Animal(const Animal &copy): type(copy.type) {
    std::cout << "Animal copy constructor called!" << std::endl;
}

Animal::~Animal() {
    std::cout << type << " Animal Destructor called!" << std::endl;
}

void Animal::makeSound(void) const{
    std::cout << "Unknow sound ear" << std::endl;
}

std::string Animal::getType(void) const {
    return this->type;
}

Animal &Animal::operator=(const Animal &rhs) {
    this->type = rhs.type;
    return *this;
}
