/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:36 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 17:04:46 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat default constructor called!" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy): Animal() {
    std::cout << "Cat copy constructor called!" << std::endl;
    type = copy.type;
}

Cat::~Cat() {
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "MEOW" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    type = rhs.type;
    return *this;
}
