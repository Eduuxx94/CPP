/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:58:17 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 12:21:17 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */): type("WrongAnimal") {
    std::cout << "WrongAnimal Default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type) {
    std::cout << "WrongAnimal type constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy): type(copy.type) {
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << type << " WrongAnimal Destructor called!" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal Unknow sound ear" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return this->getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    this->type = rhs.type;
    return *this;
}
